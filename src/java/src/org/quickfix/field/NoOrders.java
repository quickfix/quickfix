package org.quickfix.field;
import org.quickfix.IntField;
import java.util.Date;

public class NoOrders extends IntField {

    public NoOrders() {
        super(73);
    }
    public NoOrders(int data) {
        super(73, data);
    }
}
