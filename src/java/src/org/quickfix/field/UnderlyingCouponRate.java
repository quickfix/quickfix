package org.quickfix.field;
import org.quickfix.DoubleField;
import java.util.Date;

public class UnderlyingCouponRate extends DoubleField {

    public UnderlyingCouponRate() {
        super(435);
    }
    public UnderlyingCouponRate(double data) {
        super(435, data);
    }
}
