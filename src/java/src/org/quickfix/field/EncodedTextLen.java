package org.quickfix.field;
import org.quickfix.IntField;
import java.util.Date;

public class EncodedTextLen extends IntField {

    public EncodedTextLen() {
        super(354);
    }
    public EncodedTextLen(int data) {
        super(354, data);
    }
}
