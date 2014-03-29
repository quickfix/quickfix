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
import java.util.HashMap;
import java.util.Map;

public class OrderType {
    static private Map known = new HashMap();
    static public final OrderType MARKET = new OrderType("Market");
    static public final OrderType LIMIT = new OrderType("Limit");
    static public final OrderType STOP = new OrderType("Stop");
    static public final OrderType STOP_LIMIT = new OrderType("Stop Limit");
    private String name;

    static private OrderType[] array = { MARKET, LIMIT, STOP, STOP_LIMIT };

    private OrderType(String name) {
        this.name = name;
        synchronized(OrderType.class) {
            known.put(name, this);
        }
    }

    public String getName() {
        return name;
    }

    public String toString() {
        return name;
    }

    static public Object[] toArray() {
        return array;
    }

    public static OrderType parse(String type) throws IllegalArgumentException {
        OrderType result = (OrderType)known.get(type);
        if(result == null) {
            throw new IllegalArgumentException
            ("OrderType:  " + type + " is unknown.");
        }
        return result;
    }
}
