package org.quickfix.field;
import org.quickfix.IntField;
import java.util.Date;

public class NoMsgTypes extends IntField {

    public NoMsgTypes() {
        super(384);
    }
    public NoMsgTypes(int data) {
        super(384, data);
    }
}
