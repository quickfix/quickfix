package org.quickfix.field;
import org.quickfix.DoubleField;
import java.util.Date;

public class CouponRate extends DoubleField {

    public CouponRate() {
        super(223);
    }
    public CouponRate(double data) {
        super(223, data);
    }
}
