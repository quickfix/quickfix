package org.quickfix.field;
import org.quickfix.DoubleField;
import java.util.Date;

public class LastPx extends DoubleField {

    public LastPx() {
        super(31);
    }
    public LastPx(double data) {
        super(31, data);
    }
}
