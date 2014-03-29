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

public class OrderSide {
    static private Map known = new HashMap();
    static public final OrderSide BUY = new OrderSide("Buy");
    static public final OrderSide SELL = new OrderSide("Sell");
    static public final OrderSide SHORT_SELL = new OrderSide("Short Sell");
    static public final OrderSide SHORT_SELL_EXEMPT =
        new OrderSide("Short Sell Exempt");
    static public final OrderSide CROSS = new OrderSide("Cross");
    static public final OrderSide CROSS_SHORT = new OrderSide("Cross Short");
    static public final OrderSide CROSS_SHORT_EXEMPT =
        new OrderSide("Cross Short Exempt");

    static private OrderSide[] array =
        { BUY, SELL, SHORT_SELL, SHORT_SELL_EXEMPT,
          CROSS, CROSS_SHORT, CROSS_SHORT_EXEMPT };

    private String name;

    private OrderSide(String name) {
        this.name = name;
        synchronized(OrderSide.class) {
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

    public static OrderSide parse(String type)
    throws IllegalArgumentException {
        OrderSide result = (OrderSide)known.get(type);
        if(result == null) {
            throw new IllegalArgumentException
            ("OrderSide:  " + type + " is unknown.");
        }
        return result;
    }
}
