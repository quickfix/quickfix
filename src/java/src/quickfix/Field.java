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

public class Field {
    private int field;
    private Object object;

    public Field(int field, Object object) {
        this.field = field;
        this.object = object;
    }

    public int getField() {
        return field;
    }

    protected void setObject(Object object) {
        this.object = object;
    }
    public Object getObject() {
        return object;
    }

    public boolean equals(Object object) {
        if(super.equals(object) == true)
            return true;
        if(!(object instanceof Field))
            return false;

        return field == ((Field)object).getField() &&
               getObject().equals(((Field)object).getObject());
    }

    public String toString() {
        return new Integer(field).toString() + "=" + object.toString();
    }

    public int hashCode() {
        return object.hashCode();
    }
}
