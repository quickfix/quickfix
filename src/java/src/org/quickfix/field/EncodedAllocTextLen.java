package org.quickfix.field;
import org.quickfix.IntField;
import java.util.Date;

public class EncodedAllocTextLen extends IntField {

    public EncodedAllocTextLen() {
        super(360);
    }
    public EncodedAllocTextLen(int data) {
        super(360, data);
    }
}
