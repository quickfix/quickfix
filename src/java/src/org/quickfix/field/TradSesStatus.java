package org.quickfix.field;
import org.quickfix.IntField;
import java.util.Date;

public class TradSesStatus extends IntField {
    public static final int HALTED = 1;
    public static final int OPEN = 2;
    public static final int CLOSED = 3;
    public static final int PREOPEN = 4;
    public static final int PRECLOSE = 5;

    public TradSesStatus() {
        super(340);
    }
    public TradSesStatus(int data) {
        super(340, data);
    }
}
