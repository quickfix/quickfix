package org.quickfix.field;
import org.quickfix.IntField;
import java.util.Date;

public class EncodedUnderlyingSecurityDescLen extends IntField {

    public EncodedUnderlyingSecurityDescLen() {
        super(364);
    }
    public EncodedUnderlyingSecurityDescLen(int data) {
        super(364, data);
    }
}
