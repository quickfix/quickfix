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

import javax.swing.event.TableModelEvent;
import javax.swing.event.TableModelListener;
import javax.swing.table.AbstractTableModel;
import java.util.Collections;
import java.util.Comparator;
import java.util.HashMap;

public class OrderTableModel extends AbstractTableModel {

    private final static int SYMBOL = 0;
    private final static int QUANTITY = 1;
    private final static int OPEN = 2;
    private final static int EXECUTED = 3;
    private final static int SIDE = 4;
    private final static int TYPE = 5;
    private final static int LIMITPRICE = 6;
    private final static int STOPPRICE = 7;
    private final static int AVGPX = 8;
    private final static int TARGET = 9;

    private HashMap rowToOrder;
    private HashMap idToRow;
    private HashMap idToOrder;

    private String[] headers;
    private Class[] classes;

    public OrderTableModel() {
        rowToOrder = new HashMap();
        idToRow = new HashMap();
        idToOrder = new HashMap();

        headers = new String[]
                  {"Symbol", "Quantity", "Open", "Executed",
                   "Side", "Type", "Limit", "Stop", "AvgPx",
                   "Target"};
    }

    public boolean isCellEditable(int rowIndex, int columnIndex) {
        return false;
    }

    public void addOrder(Order order) {
        int row = rowToOrder.size();

        rowToOrder.put(new Integer(row), order);
        idToRow.put(order.getID(), new Integer(row));
        idToOrder.put(order.getID(), order);

        fireTableRowsInserted(row, row);
    }

    public void updateOrder(Order order, String id) {

        if(!id.equals(order.getID())) {
            String originalID = order.getID();
            order.setID(id);
            replaceOrder(order, originalID);
            return;
        }

        Integer row = (Integer)idToRow.get(order.getID());
        if(row == null)
            return;
        fireTableRowsUpdated(row.intValue(), row.intValue());
    }

    public void replaceOrder(Order order, String originalID) {

        Integer row = (Integer)idToRow.get(originalID);
        if(row == null)
            return;

        rowToOrder.put(row, order);
        idToRow.put(order.getID(), row);
        idToOrder.put(order.getID(), order);

        fireTableRowsUpdated(row.intValue(), row.intValue());
    }

    public void addID(Order order, String newID) {
        idToOrder.put(newID, order);
    }

    public Order getOrder(String id) {
        Order order = (Order)idToOrder.get(id);
        return order;
    }

    public Order getOrder(int row) {
        return (Order)rowToOrder.get(new Integer(row));
    }

    public void setValueAt(Object value, int rowIndex,
                           int columnIndex) {}

    public Class getColumnClass(int columnIndex) {
        return String.class;
    }

    public int getRowCount() {
        return rowToOrder.size();
    }

    public int getColumnCount() {
        return headers.length;
    }

    public String getColumnName(int columnIndex) {
        return headers[columnIndex];
    }

    public Object getValueAt(int rowIndex, int columnIndex) {
        Order order = (Order)rowToOrder.get(new Integer(rowIndex));
        switch(columnIndex) {
        case SYMBOL:
            return order.getSymbol();
        case QUANTITY:
            return new Integer(order.getQuantity());
        case OPEN:
            return new Integer(order.getOpen());
        case EXECUTED:
            return new Integer(order.getExecuted());
        case SIDE:
            return order.getSide();
        case TYPE:
            return order.getType();
        case LIMITPRICE:
            return order.getLimit();
        case STOPPRICE:
            return order.getStop();
        case AVGPX:
            return new Double(order.getAvgPx());
        case TARGET:
            return order.getSessionID().getTargetCompID();
        }
        return new String();
    }
}
