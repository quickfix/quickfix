package org.quickfix.field;
import org.quickfix.IntField;
import java.util.Date;

public class ListSeqNo extends IntField {

    public ListSeqNo() {
        super(67);
    }
    public ListSeqNo(int data) {
        super(67, data);
    }
}
