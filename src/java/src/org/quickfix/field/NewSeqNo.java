package org.quickfix.field;
import org.quickfix.IntField;
import java.util.Date;

public class NewSeqNo extends IntField {

    public NewSeqNo() {
        super(36);
    }
    public NewSeqNo(int data) {
        super(36, data);
    }
}
