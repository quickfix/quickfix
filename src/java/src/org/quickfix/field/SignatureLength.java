package org.quickfix.field;
import org.quickfix.IntField;
import java.util.Date;

public class SignatureLength extends IntField {

    public SignatureLength() {
        super(93);
    }
    public SignatureLength(int data) {
        super(93, data);
    }
}
