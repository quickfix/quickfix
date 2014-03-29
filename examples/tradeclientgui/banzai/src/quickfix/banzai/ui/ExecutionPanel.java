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

import org.apache.log4j.Category;
import quickfix.banzai.ExecutionTableModel;

import javax.swing.*;
import java.awt.*;

/**
 *  Contains the executions panel
 */
public class ExecutionPanel extends JPanel {

    /** enable logging for this class */
    private static Category log
    = Category.getInstance(ExecutionPanel.class.getName());

    public ExecutionPanel(ExecutionTableModel executionTableModel) {
        setBorder(BorderFactory.createEmptyBorder(5, 5, 5, 5));
        setLayout(new GridBagLayout());
        GridBagConstraints constraints = new GridBagConstraints();
        constraints.fill = GridBagConstraints.BOTH;
        constraints.weightx = 1;
        constraints.weighty = 1;

        JTable table = new ExecutionTable(executionTableModel);
        add(new JScrollPane(table), constraints);
    }

}
