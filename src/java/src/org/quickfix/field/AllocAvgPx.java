package org.quickfix.field;
import org.quickfix.DoubleField;
import java.util.Date;

public class AllocAvgPx extends DoubleField {

    public AllocAvgPx() {
        super(153);
    }
    public AllocAvgPx(double data) {
        super(153, data);
    }
}
