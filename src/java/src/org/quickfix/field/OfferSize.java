package org.quickfix.field;
import org.quickfix.DoubleField;
import java.util.Date;

public class OfferSize extends DoubleField {

    public OfferSize() {
        super(135);
    }
    public OfferSize(double data) {
        super(135, data);
    }
}
