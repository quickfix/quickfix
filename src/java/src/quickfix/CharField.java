/****************************************************************************
** Copyright (c) 2001-2005 quickfixengine.org  All rights reserved.
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

import java.lang.Character;

public class CharField extends Field {

    public CharField(int field) {
        super(field, new Character(' '));
    }

    public CharField(int field, Character data) {
        super(field, data);
    }

    public CharField(int field, char data) {
        super(field, new Character(data));
    }

    public void setValue(Character value) {
        setObject(value);
    }

    public void setValue(char value) {
        setObject(new Character(value));
    }

    public char getValue() {
        return ((Character)getObject()).charValue();
    }

    public boolean valueEquals(Character value) {
        return getValue() == value.charValue();
    }

    public boolean valueEquals(char value) {
        return getValue() == value;
    }
}
