package org.quickfix.field;
import org.quickfix.IntField;
import java.util.Date;

public class SecureDataLen extends IntField {

    public SecureDataLen() {
        super(90);
    }
    public SecureDataLen(int data) {
        super(90, data);
    }
}
