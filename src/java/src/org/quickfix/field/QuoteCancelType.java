package org.quickfix.field;
import org.quickfix.IntField;
import java.util.Date;

public class QuoteCancelType extends IntField {

    public QuoteCancelType() {
        super(298);
    }
    public QuoteCancelType(int data) {
        super(298, data);
    }
}
