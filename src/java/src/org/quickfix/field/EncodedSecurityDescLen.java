package org.quickfix.field;
import org.quickfix.IntField;
import java.util.Date;

public class EncodedSecurityDescLen extends IntField {

    public EncodedSecurityDescLen() {
        super(350);
    }
    public EncodedSecurityDescLen(int data) {
        super(350, data);
    }
}
