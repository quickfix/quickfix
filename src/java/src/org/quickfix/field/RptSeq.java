package org.quickfix.field;
import org.quickfix.IntField;
import java.util.Date;

public class RptSeq extends IntField {

    public RptSeq() {
        super(83);
    }
    public RptSeq(int data) {
        super(83, data);
    }
}
