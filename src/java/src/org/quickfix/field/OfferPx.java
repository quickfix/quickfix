package org.quickfix.field;
import org.quickfix.DoubleField;
import java.util.Date;

public class OfferPx extends DoubleField {

    public OfferPx() {
        super(133);
    }
    public OfferPx(double data) {
        super(133, data);
    }
}
