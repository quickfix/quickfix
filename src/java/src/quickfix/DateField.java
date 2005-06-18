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
import java.util.Date;
import java.util.TimeZone;
import java.util.Calendar;

public class DateField extends Field {

    private static TimeZone timezone;
    private static Calendar calendar;

    static {
        timezone = TimeZone.getTimeZone("GMT+0");
    }

    protected DateField(int field) {
        super(field, createDate());
    }

    protected DateField(int field, Date data) {
        super(field, data);
    }

    private static Date createDate() {
        calendar = Calendar.getInstance(timezone);
        return calendar.getTime();
    }

    public void setValue(Date value) {
        setObject(value);
    }

    public Date getValue() {
        return (Date)getObject();
    }

    public boolean valueEquals(Date value) {
        return getValue().equals(value);
    }
}
