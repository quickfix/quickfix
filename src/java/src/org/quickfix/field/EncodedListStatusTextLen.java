package org.quickfix.field;
import org.quickfix.IntField;
import java.util.Date;

public class EncodedListStatusTextLen extends IntField {

    public EncodedListStatusTextLen() {
        super(445);
    }
    public EncodedListStatusTextLen(int data) {
        super(445, data);
    }
}
