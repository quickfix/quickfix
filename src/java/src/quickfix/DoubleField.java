/****************************************************************************
** Copyright (c) 2001-2004 quickfixengine.org  All rights reserved.
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

package quickfix;

import java.lang.Double;

public class DoubleField extends Field {

    public DoubleField(int field) {
        super(field, new Double(0));
    }

    public DoubleField(int field, Double data) {
        super(field, data);
    }

    public DoubleField(int field, double data) {
        super(field, new Double(data));
    }

    public void setValue(Double value) {
        setObject(value);
    }

    public void setValue(double value) {
        setObject(new Double(value));
    }

    public double getValue() {
        return ((Double)getObject()).doubleValue();
    }

    public boolean valueEquals(Double value) {
        return getValue() == value.doubleValue();
    }

    public boolean valueEquals(double value) {
        return getValue() == value;
    }
}
