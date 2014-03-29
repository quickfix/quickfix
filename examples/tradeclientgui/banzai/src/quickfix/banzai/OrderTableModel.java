/****************************************************************************
** Copyright (c) 2001-2014
**
** This file is part of the QuickFIX FIX Engine
**
** This file may be distributed under the terms of the quickfixengine.org
** license as defined by quickfixengine.org and appearing in the file
** LICENSE included in the packaging of this file.
**
** This file is provided AS IS with NO WARRANTY OF ANY KIND, INCLUDING THE
** WARRANTY OF DESIGN, MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.
**
** See http://www.quickfixengine.org/LICENSE for licensing information.
**
** Contact ask@quickfixengine.org if any conditions of this licensing are
** not clear to you.
**
****************************************************************************/

package quickfix.banzai;

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
