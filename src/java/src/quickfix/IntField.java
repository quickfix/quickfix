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

import java.lang.Integer;

public class IntField extends Field {

    public IntField(int field) {
        super(field, new Integer(0));
    }

    public IntField(int field, Integer data) {
        super(field, data);
    }

    public IntField(int field, int data) {
        super(field, new Integer(data));
    }

    public void setValue(Integer value) {
        setObject(value);
    }

    public void setValue(int value) {
        setObject(new Integer(value));
    }

    public int getValue() {
        return ((Integer)getObject()).intValue();
    }

    public boolean valueEquals(Integer value) {
        return getValue() == value.intValue();
    }

    public boolean valueEquals(int value) {
        return getValue() == value;
    }
}
