package org.quickfix.field;
import org.quickfix.DoubleField;
import java.util.Date;

public class LastSpotRate extends DoubleField {

    public LastSpotRate() {
        super(194);
    }
    public LastSpotRate(double data) {
        super(194, data);
    }
}
