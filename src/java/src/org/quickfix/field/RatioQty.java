package org.quickfix.field;
import org.quickfix.DoubleField;
import java.util.Date;

public class RatioQty extends DoubleField {

    public RatioQty() {
        super(319);
    }
    public RatioQty(double data) {
        super(319, data);
    }
}
