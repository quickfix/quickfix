/* ====================================================================
 * The QuickFIX Software License, Version 1.0
 *
 * Copyright (c) 2001 ThoughtWorks, Inc.  All rights
 * reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 *
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in
 *    the documentation and/or other materials provided with the
 *    distribution.
 *
 * 3. The end-user documentation included with the redistribution,
 *    if any, must include the following acknowledgment:
 *       "This product includes software developed by
 *        ThoughtWorks, Inc. (http://www.thoughtworks.com/)."
 *    Alternately, this acknowledgment may appear in the software itself,
 *    if and wherever such third-party acknowledgments normally appear.
 *
 * 4. The names "QuickFIX" and "ThoughtWorks, Inc." must
 *    not be used to endorse or promote products derived from this
 *    software without prior written permission. For written
 *    permission, please contact quickfix-users@lists.sourceforge.net.
 *
 * 5. Products derived from this software may not be called "QuickFIX",
 *    nor may "QuickFIX" appear in their name, without prior written
 *    permission of ThoughtWorks, Inc.
 *
 * THIS SOFTWARE IS PROVIDED ``AS IS'' AND ANY EXPRESSED OR IMPLIED
 * WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES
 * OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED.  IN NO EVENT SHALL THOUGHTWORKS INC OR
 * ITS CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
 * SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
 * LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF
 * USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
 * ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
 * OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT
 * OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
 * SUCH DAMAGE.
 * ====================================================================
 */

package org.quickfix.banzai;

import java.util.Date;
import java.util.Observable;
import java.util.Observer;
import java.util.Set;
import java.util.HashSet;
import java.util.Map;
import java.util.HashMap;
import org.quickfix.*;
import org.quickfix.banzai.Order;
import org.quickfix.field.*;
import javax.swing.SwingUtilities;

public class BanzaiApplication implements Application {
    private OrderTableModel orderTableModel = null;
    private ExecutionTableModel executionTableModel = null;
    private ObservableOrder observableOrder = new ObservableOrder();
    private ObservableLogon observableLogon = new ObservableLogon();
    static private TwoWayMap sideMap = new TwoWayMap();
    static private TwoWayMap typeMap = new TwoWayMap();
    static private TwoWayMap tifMap = new TwoWayMap();
    static private HashMap execIDs = new HashMap();

    public BanzaiApplication(OrderTableModel orderTableModel,
                             ExecutionTableModel executionTableModel) {
        this.orderTableModel = orderTableModel;
        this.executionTableModel = executionTableModel;
    }

    public void onCreate(SessionID sessionID) {}
    public void onLogon(SessionID sessionID) {
        observableLogon.logon(sessionID);
    }
    public void onLogout(SessionID sessionID) {
        observableLogon.logoff(sessionID);
    }

    public void toAdmin(org.quickfix.Message message,
                        SessionID sessionID) {}

    public void toApp(org.quickfix.Message message,
                      SessionID sessionID) throws DoNotSend {}

    public void fromAdmin(org.quickfix.Message message,SessionID sessionID)
    throws FieldNotFound, IncorrectDataFormat, IncorrectTagValue, RejectLogon {}

    public void fromApp(org.quickfix.Message message, SessionID sessionID)
    throws FieldNotFound, IncorrectDataFormat, IncorrectTagValue, UnsupportedMessageType {
        try {
            SwingUtilities.invokeLater(new doFromApp(message, sessionID));
        } catch(Exception e) {}
    }

    public class doFromApp implements Runnable {
        private org.quickfix.Message message;
        private SessionID sessionID;

        public doFromApp(org.quickfix.Message message, SessionID sessionID) {
            this.message = message;
            this.sessionID = sessionID;
        }

        public void run() {
            try {
                MsgType msgType = new MsgType();
                if(message.getHeader().getField(msgType).valueEquals("8"))
                    executionReport(message, sessionID);
                if(message.getHeader().getField(msgType).valueEquals("9"))
                    cancelReject(message, sessionID);
            } catch(FieldNotFound e) {
                System.out.println(e);
            }
        }
    }

    private void executionReport(Message message, SessionID sessionID)
    throws FieldNotFound {

        ExecID execID = (ExecID)message.getField(new ExecID());
        if(alreadyProcessed(execID, sessionID))
            return;

        String id = message.getField(new ClOrdID()).getValue();
        Order order = orderTableModel.getOrder(id);
        if(order == null)
            return;

        LastShares lastShares = new LastShares(0);

        try {
            OrderQty orderQty = (OrderQty)message.getField(new OrderQty());
            int diff = order.getQuantity() - (int)orderQty.getValue();
            order.setQuantity((int)orderQty.getValue());
            order.setOpen(order.getOpen() - diff);
        } catch(FieldNotFound e) {}
        try {
            Price price = (Price)message.getField(new Price());
            order.setLimit(new Double(price.getValue()));
        } catch(FieldNotFound e) {}
        try {
            message.getField(lastShares);
        } catch(FieldNotFound e) {}

        if(lastShares.getValue() > 0) {
            order.setExecuted((int)message.getField(new CumQty()).getValue());
            order.setAvgPx(message.getField(new AvgPx()).getValue());
        }
        OrdStatus ordStatus = (OrdStatus)message.getField(new OrdStatus());

        try {
            order.setOpen((int)message.getField(new LeavesQty()).getValue());
        } catch(FieldNotFound e) {
            // FIX40 doesn't have LeavesQty
            if(ordStatus.valueEquals(OrdStatus.REJECTED) ||
                    ordStatus.valueEquals(OrdStatus.CANCELED))
                order.setOpen(0);
            else if(ordStatus.valueEquals(OrdStatus.NEW)) {
                if(order.isNew()) {
                    order.setOpen(order.getQuantity());
                    order.setNew(false);
                }
            }
            order.setOpen(order.getOpen() - (int)lastShares.getValue());
        }

        if(ordStatus.valueEquals(OrdStatus.REJECTED))
            order.setRejected(true);
        else if(ordStatus.valueEquals(OrdStatus.CANCELED) ||
                ordStatus.valueEquals(OrdStatus.DONE_FOR_DAY))
            order.setCanceled(true);

        try {
            order.setMessage(message.getField(new Text()).getValue());
        } catch(FieldNotFound e) {
            order.setMessage(null);
        }

        orderTableModel.updateOrder(order, id);
        observableOrder.update(order);

        if(lastShares.getValue() > 0) {
            Execution execution = new Execution();
            execution.setExchangeID(sessionID + message.getField(new ExecID()).getValue());
            execution.setSymbol(message.getField(new Symbol()).getValue());
            execution.setQuantity((int)lastShares.getValue());
            execution.setPrice(message.getField(new LastPx()).getValue());
            Side side = (Side)message.getField(new Side());
            execution.setSide(FIXSideToSide(side));
            executionTableModel.addExecution(execution);
        }
    }

    private void cancelReject(Message message, SessionID sessionID)
    throws FieldNotFound {

        String id = message.getField(new ClOrdID()).getValue();
        Order order = orderTableModel.getOrder(id);
        if(order == null)
            return;
        if(order.getOriginalID() != null)
            order = orderTableModel.getOrder(order.getOriginalID());

        try {
            order.setMessage(message.getField(new Text()).getValue());
        } catch(FieldNotFound e) {}
        orderTableModel.updateOrder(order, order.getID());
    }

    private boolean alreadyProcessed(ExecID execID, SessionID sessionID) {
        HashSet set = (HashSet)execIDs.get(sessionID);
        if(set == null) {
            set = new HashSet();
            set.add(execID);
            execIDs.put(sessionID, set);
            return false;
        } else {
            if(set.contains(execID))
                return true;
            set.add(execID);
            return false;
        }
    }

    private void send(org.quickfix.Message message, SessionID sessionID) {
        try {
            Session.sendToTarget(message, sessionID);
        } catch(SessionNotFound e) {
            System.out.println(e);
        }
    }

    public void send(Order order) {
        String beginString = order.getSessionID().getBeginString();
        if(beginString.equals("FIX.4.0"))
            send40(order);
        else if(beginString.equals("FIX.4.1"))
            send41(order);
        else if(beginString.equals("FIX.4.2"))
            send42(order);
        return;
    }

    public void send40(Order order) {
        org.quickfix.fix40.NewOrderSingle newOrderSingle =
            new org.quickfix.fix40.NewOrderSingle
            (new ClOrdID(order.getID()),
             new HandlInst('1'),
             new Symbol(order.getSymbol()),
             sideToFIXSide(order.getSide()),
             new OrderQty(order.getQuantity()),
             typeToFIXType(order.getType()));

        send(populateOrder(order, newOrderSingle), order.getSessionID());
    }

    public void send41(Order order) {
        org.quickfix.fix41.NewOrderSingle newOrderSingle =
            new org.quickfix.fix41.NewOrderSingle
            (new ClOrdID(order.getID()),
             new HandlInst('1'),
             new Symbol(order.getSymbol()),
             sideToFIXSide(order.getSide()),
             typeToFIXType(order.getType()));
        newOrderSingle.set(new OrderQty(order.getQuantity()));

        send(populateOrder(order, newOrderSingle), order.getSessionID());
    }

    public void send42(Order order) {
        org.quickfix.fix42.NewOrderSingle newOrderSingle =
            new org.quickfix.fix42.NewOrderSingle
            (new ClOrdID(order.getID()),
             new HandlInst('1'),
             new Symbol(order.getSymbol()),
             sideToFIXSide(order.getSide()),
             new TransactTime(),
             typeToFIXType(order.getType()));
        newOrderSingle.set(new OrderQty(order.getQuantity()));

        send(populateOrder(order, newOrderSingle), order.getSessionID());
    }

    public  org.quickfix.Message populateOrder
    (Order order, org.quickfix.Message newOrderSingle) {

        OrderType type = order.getType();

        if(type == OrderType.LIMIT)
            newOrderSingle.setField(new Price(order.getLimit().doubleValue()));
        else if(type == OrderType.STOP)
            newOrderSingle.setField(new StopPx(order.getStop().doubleValue()));
        else if(type == OrderType.STOP_LIMIT) {
            newOrderSingle.setField(new Price(order.getLimit().doubleValue()));
            newOrderSingle.setField(new StopPx(order.getStop().doubleValue()));
        }

        newOrderSingle.setField(tifToFIXTif(order.getTIF()))
        ;
        return newOrderSingle;
    }

    public void cancel(Order order) {
        String beginString = order.getSessionID().getBeginString();
        if(beginString.equals("FIX.4.0"))
            cancel40(order);
        else if(beginString.equals("FIX.4.1"))
            cancel41(order);
        else if(beginString.equals("FIX.4.2"))
            cancel42(order);
        return;
    }

    public void cancel40(Order order) {
        String id = order.generateID();
        org.quickfix.fix40.OrderCancelRequest message =
            new org.quickfix.fix40.OrderCancelRequest
            (new OrigClOrdID(order.getID()),
             new ClOrdID(id),
             new CxlType('F'),
             new Symbol(order.getSymbol()),
             sideToFIXSide(order.getSide()),
             new OrderQty(order.getQuantity()));

        orderTableModel.addID(order, id);
        send(message, order.getSessionID());
    }

    public void cancel41(Order order) {
        String id = order.generateID();
        org.quickfix.fix41.OrderCancelRequest message =
            new org.quickfix.fix41.OrderCancelRequest
            (new OrigClOrdID(order.getID()),
             new ClOrdID(id),
             new Symbol(order.getSymbol()),
             sideToFIXSide(order.getSide()));
        message.setField(new OrderQty(order.getQuantity()));

        orderTableModel.addID(order, id);
        send(message, order.getSessionID());
    }

    public void cancel42(Order order) {
        String id = order.generateID();
        org.quickfix.fix42.OrderCancelRequest message =
            new org.quickfix.fix42.OrderCancelRequest
            (new OrigClOrdID(order.getID()),
             new ClOrdID(id),
             new Symbol(order.getSymbol()),
             sideToFIXSide(order.getSide()),
             new TransactTime());
        message.setField(new OrderQty(order.getQuantity()));

        orderTableModel.addID(order, id);
        send(message, order.getSessionID());
    }

    public void replace(Order order, Order newOrder) {
        String beginString = order.getSessionID().getBeginString();
        if(beginString.equals("FIX.4.0"))
            replace40(order, newOrder);
        else if(beginString.equals("FIX.4.1"))
            replace41(order, newOrder);
        else if(beginString.equals("FIX.4.2"))
            replace42(order, newOrder);
        return;
    }

    public void replace40(Order order, Order newOrder) {
        org.quickfix.fix40.OrderCancelReplaceRequest message =
            new org.quickfix.fix40.OrderCancelReplaceRequest
            (new OrigClOrdID(order.getID()),
             new ClOrdID(newOrder.getID()),
             new HandlInst('1'),
             new Symbol(order.getSymbol()),
             sideToFIXSide(order.getSide()),
             new OrderQty(newOrder.getQuantity()),
             typeToFIXType(order.getType()));

        orderTableModel.addID(order, newOrder.getID());
        send(populateCancelReplace(order, newOrder,
                                   message), order.getSessionID());
    }

    public void replace41(Order order, Order newOrder) {
        org.quickfix.fix41.OrderCancelReplaceRequest message =
            new org.quickfix.fix41.OrderCancelReplaceRequest
            (new OrigClOrdID(order.getID()),
             new ClOrdID(newOrder.getID()),
             new HandlInst('1'),
             new Symbol(order.getSymbol()),
             sideToFIXSide(order.getSide()),
             typeToFIXType(order.getType()));

        orderTableModel.addID(order, newOrder.getID());
        send(populateCancelReplace(order, newOrder,
                                   message), order.getSessionID());
    }

    public void replace42(Order order, Order newOrder) {
        org.quickfix.fix42.OrderCancelReplaceRequest message =
            new org.quickfix.fix42.OrderCancelReplaceRequest
            (new OrigClOrdID(order.getID()),
             new ClOrdID(newOrder.getID()),
             new HandlInst('1'),
             new Symbol(order.getSymbol()),
             sideToFIXSide(order.getSide()),
             new TransactTime(),
             typeToFIXType(order.getType()));

        orderTableModel.addID(order, newOrder.getID());
        send(populateCancelReplace(order, newOrder,
                                   message), order.getSessionID());
    }

    Message populateCancelReplace(Order order, Order newOrder,
                                  org.quickfix.Message message) {

        if(order.getQuantity() != newOrder.getQuantity())
            message.setField(new OrderQty(newOrder.getQuantity()));
        if(order.getLimit() != newOrder.getLimit())
            message.setField(new Price(newOrder.getLimit().doubleValue()));
        return message;
    }

    public  Side sideToFIXSide(OrderSide side) {
        return (Side)sideMap.getFirst(side);
    }
    public  OrderSide FIXSideToSide(Side side) {
        return (OrderSide)sideMap.getSecond(side);
    }

    public  OrdType typeToFIXType(OrderType type) {
        return (OrdType)typeMap.getFirst(type);
    }
    public  OrderType FIXTypeToType(OrdType type) {
        return (OrderType)typeMap.getSecond(type);
    }

    public  TimeInForce tifToFIXTif(OrderTIF tif) {
        return (TimeInForce)tifMap.getFirst(tif)
               ;
    }
    public  OrderTIF FIXTifToTif(TimeInForce tif) {
        return (OrderTIF)typeMap.getSecond(tif)
               ;
    }

    public void addLogonObserver(Observer observer) {
        observableLogon.addObserver(observer);
    }
    public void deleteLogonObserver(Observer observer) {
        observableLogon.deleteObserver(observer);
    }
    public void addOrderObserver(Observer observer) {
        observableOrder.addObserver(observer);
    }
    public void deleteOrderObserver(Observer observer) {
        observableOrder.deleteObserver(observer);
    }

    public class ObservableOrder extends Observable {
        public void update(Order order) {
            setChanged();
            notifyObservers(order);
            clearChanged();
        }
    }

    public class ObservableLogon extends Observable {
        private HashSet set = new HashSet();

        public void logon(SessionID sessionID) {
            set.add(sessionID);
            setChanged();
            notifyObservers(new LogonEvent(sessionID, true));
            clearChanged();
        }
        public void logoff(SessionID sessionID) {
            set.remove(sessionID);
            setChanged();
            notifyObservers(new LogonEvent(sessionID, false));
            clearChanged();
        }
    }

    static {
        sideMap.put(OrderSide.BUY, new Side(Side.BUY));
        sideMap.put(OrderSide.SELL, new Side(Side.SELL));
        sideMap.put(OrderSide.SHORT_SELL, new Side(Side.SELL_SHORT));
        sideMap.put(OrderSide.SHORT_SELL_EXEMPT,
                    new Side(Side.SELL_SHORT_EXEMPT));
        sideMap.put(OrderSide.CROSS, new Side(Side.CROSS));
        sideMap.put(OrderSide.CROSS_SHORT, new Side(Side.CROSS_SHORT));

        typeMap.put(OrderType.MARKET, new OrdType(OrdType.MARKET));
        typeMap.put(OrderType.LIMIT, new OrdType(OrdType.LIMIT));
        typeMap.put(OrderType.STOP, new OrdType(OrdType.STOP));
        typeMap.put(OrderType.STOP_LIMIT, new OrdType(OrdType.STOP_LIMIT));

        tifMap.put(OrderTIF.DAY, new TimeInForce(TimeInForce.DAY));
        tifMap.put(OrderTIF.IOC,
                   new TimeInForce(TimeInForce.IMMEDIATE_OR_CANCEL));
        tifMap.put(OrderTIF.OPG, new TimeInForce(TimeInForce.AT_THE_OPENING));
        tifMap.put(OrderTIF.GTC,
                   new TimeInForce(TimeInForce.GOOD_TILL_CANCEL));
        tifMap.put(OrderTIF.GTX,
                   new TimeInForce(TimeInForce.GOOD_TILL_CROSSING));

    }
}
