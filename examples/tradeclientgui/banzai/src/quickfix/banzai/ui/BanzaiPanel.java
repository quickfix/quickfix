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

package quickfix.banzai.ui;

import org.apache.log4j.Category;
import org.apache.log4j.PatternLayout;
import quickfix.banzai.Order;
import quickfix.banzai.OrderTableModel;
import quickfix.banzai.ExecutionTableModel;
import quickfix.banzai.BanzaiApplication;

import javax.swing.*;
import javax.swing.event.*;
import java.awt.*;
import java.awt.event.*;
import java.util.ArrayList;
import java.util.Observer;
import java.util.Observable;

/**
 *  Main content panel
 */
public class BanzaiPanel extends JPanel
    implements Observer, ActionListener {

    private static Category log =
        Category.getInstance(BanzaiPanel.class.getName());

    private OrderEntryPanel orderEntryPanel = null;
    private OrderPanel orderPanel = null;
    private ExecutionPanel executionPanel = null;
    private CancelReplacePanel cancelReplacePanel = null;
    private OrderTableModel orderTableModel = null;

    public BanzaiPanel(OrderTableModel orderTableModel,
                       ExecutionTableModel executionTableModel,
                       BanzaiApplication application) {
        setName("BanzaiPanel");
        this.orderTableModel = orderTableModel;

        setBorder(BorderFactory.createEmptyBorder(5, 5, 5, 5));
        setLayout(new GridBagLayout());
        GridBagConstraints constraints = new GridBagConstraints();
        constraints.fill = GridBagConstraints.BOTH;
        constraints.weightx = 1;

        orderEntryPanel = new OrderEntryPanel(orderTableModel, application);
        constraints.insets = new Insets(0, 0, 5, 0);
        add(orderEntryPanel, constraints);

        constraints.gridx++;
        constraints.weighty = 10;

        JTabbedPane tabbedPane = new JTabbedPane();
        orderPanel = new OrderPanel(orderTableModel, application);
        executionPanel = new ExecutionPanel(executionTableModel);

        tabbedPane.add("Orders", orderPanel);
        tabbedPane.add("Executions", executionPanel);
        add(tabbedPane, constraints);

        cancelReplacePanel = new CancelReplacePanel(application);
        constraints.weighty = 0;
        add(cancelReplacePanel, constraints);
        cancelReplacePanel.setEnabled(false);

        orderEntryPanel.addActionListener(this);
        orderPanel.orderTable().getSelectionModel()
        .addListSelectionListener(new OrderSelection());
        cancelReplacePanel.addActionListener(this);
        application.addOrderObserver(this);
    }

    public void update(Observable o, Object arg) {
        cancelReplacePanel.update();
    }

    public void actionPerformed(ActionEvent e) {
        ListSelectionModel selection =
            orderPanel.orderTable().getSelectionModel();
        selection.clearSelection();
    }

    private class OrderSelection implements ListSelectionListener {
        public void valueChanged(ListSelectionEvent e) {
            ListSelectionModel selection =
                orderPanel.orderTable().getSelectionModel();
            if(selection.isSelectionEmpty()) {
                orderEntryPanel.clearMessage();
                return;
            }

            int firstIndex = e.getFirstIndex();
            int lastIndex = e.getLastIndex();
            int selectedRow = 0;
            int numSelected = 0;

            for(int i = firstIndex; i <= lastIndex; ++i) {
                if(selection.isSelectedIndex(i)) {
                    selectedRow = i;
                    numSelected++;
                }
            }

            if(numSelected > 1)
                orderEntryPanel.clearMessage();
            else {
                Order order = (Order)orderTableModel.getOrder(selectedRow);
                if(order != null) {
                    orderEntryPanel.setMessage(order.getMessage());
                    cancelReplacePanel.setOrder(order);
                }
            }
        }
    }
}
