package org.quickfix.field;
import org.quickfix.DoubleField;
import java.util.Date;

public class StopPx extends DoubleField {

    public StopPx() {
        super(99);
    }
    public StopPx(double data) {
        super(99, data);
    }
}
