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

package quickfix.banzai.ui;

import quickfix.banzai.OrderTableModel;
import quickfix.banzai.Order;
import quickfix.banzai.BanzaiApplication;
import javax.swing.table.*;
import javax.swing.*;
import java.awt.*;
import java.awt.event.*;

public class OrderTable extends JTable implements MouseListener {
    private BanzaiApplication application;

    public OrderTable(OrderTableModel orderTableModel,
                      BanzaiApplication application) {
        super(orderTableModel);
        this.application = application;
        addMouseListener(this);
    }

    public Component prepareRenderer(TableCellRenderer renderer,
                                     int row, int column) {
        Order order = (Order)((OrderTableModel)dataModel).getOrder(row);

        int open = order.getOpen();
        int executed = order.getExecuted();
        boolean rejected = order.getRejected();
        boolean canceled = order.getCanceled();

        DefaultTableCellRenderer r = (DefaultTableCellRenderer)renderer;
        r.setForeground(Color.black);

        if(rejected)
            r.setBackground(Color.red);
        else if(canceled)
            r.setBackground(Color.white);
        else if(open == 0 && executed == 0)
            r.setBackground(Color.yellow);
        else if(open > 0)
            r.setBackground(Color.green);
        else if(open == 0)
            r.setBackground(Color.white);

        return super.prepareRenderer(renderer, row, column);
    }

    public void mouseClicked(MouseEvent e) {
        if(e.getClickCount() != 2)
            return;
        int row = rowAtPoint(e.getPoint());
        Order order = (Order)((OrderTableModel)dataModel).getOrder(row);
        application.cancel(order);
    }
public void mouseEntered(MouseEvent e) {}
    public void mouseExited(MouseEvent e) {}
    public void mousePressed(MouseEvent e) {}
    public void mouseReleased(MouseEvent e) {}
}
