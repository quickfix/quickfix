package org.quickfix.field;
import org.quickfix.IntField;
import java.util.Date;

public class EncodedIssuerLen extends IntField {

    public EncodedIssuerLen() {
        super(348);
    }
    public EncodedIssuerLen(int data) {
        super(348, data);
    }
}
