package org.quickfix.field;
import org.quickfix.IntField;
import java.util.Date;

public class NoTradingSessions extends IntField {

    public NoTradingSessions() {
        super(386);
    }
    public NoTradingSessions(int data) {
        super(386, data);
    }
}
