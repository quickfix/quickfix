package org.quickfix.field;
import org.quickfix.IntField;
import java.util.Date;

public class ListStatusType extends IntField {

    public ListStatusType() {
        super(429);
    }
    public ListStatusType(int data) {
        super(429, data);
    }
}
