package org.quickfix.field;
import org.quickfix.DoubleField;
import java.util.Date;

public class LiquidityPctHigh extends DoubleField {

    public LiquidityPctHigh() {
        super(403);
    }
    public LiquidityPctHigh(double data) {
        super(403, data);
    }
}
