package org.quickfix.field;
import org.quickfix.DoubleField;
import java.util.Date;

public class BuyVolume extends DoubleField {

    public BuyVolume() {
        super(330);
    }
    public BuyVolume(double data) {
        super(330, data);
    }
}
