package org.quickfix.field;
import org.quickfix.IntField;
import java.util.Date;

public class TradSesMethod extends IntField {
    public static final int ELECTRONIC = 1;
    public static final int OPEN_OUTCRY = 2;
    public static final int TWO_PARTY = 3;

    public TradSesMethod() {
        super(338);
    }
    public TradSesMethod(int data) {
        super(338, data);
    }
}
