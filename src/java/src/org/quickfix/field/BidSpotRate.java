package org.quickfix.field;
import org.quickfix.DoubleField;
import java.util.Date;

public class BidSpotRate extends DoubleField {

    public BidSpotRate() {
        super(188);
    }
    public BidSpotRate(double data) {
        super(188, data);
    }
}
