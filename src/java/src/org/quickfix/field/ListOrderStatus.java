package org.quickfix.field;
import org.quickfix.IntField;
import java.util.Date;

public class ListOrderStatus extends IntField {

    public ListOrderStatus() {
        super(431);
    }
    public ListOrderStatus(int data) {
        super(431, data);
    }
}
