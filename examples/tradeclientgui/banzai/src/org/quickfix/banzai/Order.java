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

import org.quickfix.SessionID;

public class Order implements Cloneable {
    private SessionID sessionID = null;
    private String symbol = null;
    private int quantity = 0;
    private int open = 0;
    private int executed = 0;
    private OrderSide side = OrderSide.BUY;
    private OrderType type = OrderType.MARKET;
    private OrderTIF tif = OrderTIF.DAY;
    private Double limit = null;
    private Double stop = null;
    private double avgPx = 0.0;
    private boolean rejected = false;
    private boolean canceled = false;
    private boolean isNew = true;
    private String message = null;
    private String ID = null;
    private String originalID = null;
    private static int nextID = 1;

    public Order() {
        ID = generateID();
    }
    public Order(String ID) {
        this.ID = ID;
    }

    public Object clone() {
        try {
            Order order = (Order)super.clone();
            order.setOriginalID(getID());
            order.setID(order.generateID());
            return order;
        } catch(CloneNotSupportedException e) {}
        return null;
    }

    public String generateID() {
        return new Integer(nextID++).toString();
    }
    public SessionID getSessionID() {
        return sessionID;
    }
    public void setSessionID(SessionID sessionID) {
        this.sessionID = sessionID;
    }
    public String getSymbol() {
        return symbol;
    }
    public void setSymbol(String symbol) {
        this.symbol = symbol;
    }
    public int getQuantity() {
        return quantity;
    }
    public void setQuantity(int quantity) {
        this.quantity = quantity;
    }
    public int getOpen() {
        return open;
    }
    public void setOpen(int open) {
        this.open = open;
    }
    public int getExecuted() {
        return executed;
    }
    public void setExecuted(int executed) {
        this.executed = executed;
    }
    public OrderSide getSide() {
        return side;
    }
    public void setSide(OrderSide side) {
        this.side = side;
    }
    public OrderType getType() {
        return type;
    }
    public void setType(OrderType type) {
        this.type = type;
    }
    public OrderTIF getTIF() {
        return tif;
    }
    public void setTIF(OrderTIF tif) {
        this.tif = tif;
    }
    public Double getLimit() {
        return limit;
    }
    public void setLimit(Double limit) {
        this.limit = limit;
    }
    public void setLimit(String limit) {
        if(limit == "" || limit == null) {
            this.limit = null;
        } else {
            this.limit = new Double(limit);
        }
    }
    public Double getStop() {
        return stop;
    }
    public void setStop(Double stop) {
        this.stop = stop;
    }
    public void setStop(String stop) {
        if(stop == "" || stop == null) {
            this.stop = null;
        } else {
            this.stop = new Double(stop);
        }
    }
    public void setAvgPx(double avgPx) {
        this.avgPx = avgPx;
    }
    public double getAvgPx() {
        return avgPx;
    }
    public void setRejected(boolean rejected) {
        this.rejected = rejected;
    }
    public boolean getRejected() {
        return rejected;
    }
    public void setCanceled(boolean canceled) {
        this.canceled = canceled;
    }
    public boolean getCanceled() {
        return canceled;
    }
    public void setNew(boolean isNew) {
        this.isNew = isNew;
    }
    public boolean isNew() {
        return isNew;
    }
    public void setMessage(String message) {
        this.message = message;
    }
    public String getMessage() {
        return message;
    }
    public void setID(String ID) {
        this.ID = ID;
    }
    public String getID() {
        return ID;
    }
    public void setOriginalID(String originalID) {
        this.originalID = originalID;
    }
    public String getOriginalID() {
        return originalID;
    }
}
