package org.quickfix.field;
import org.quickfix.IntField;
import java.util.Date;

public class MsgSeqNum extends IntField {

    public MsgSeqNum() {
        super(34);
    }
    public MsgSeqNum(int data) {
        super(34, data);
    }
}
