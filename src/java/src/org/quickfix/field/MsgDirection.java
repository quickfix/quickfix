package org.quickfix.field;
import org.quickfix.CharField;
import java.util.Date;

public class MsgDirection extends CharField {
    public static final char SEND = 'S';
    public static final char RECEIVE = 'R';

    public MsgDirection() {
        super(385);
    }
    public MsgDirection(char data) {
        super(385, data);
    }
}
