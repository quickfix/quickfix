package org.quickfix.field;
import org.quickfix.DoubleField;
import java.util.Date;

public class UnderlyingStrikePrice extends DoubleField {

    public UnderlyingStrikePrice() {
        super(316);
    }
    public UnderlyingStrikePrice(double data) {
        super(316, data);
    }
}
