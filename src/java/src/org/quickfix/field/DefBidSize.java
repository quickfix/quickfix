package org.quickfix.field;
import org.quickfix.DoubleField;
import java.util.Date;

public class DefBidSize extends DoubleField {

    public DefBidSize() {
        super(293);
    }
    public DefBidSize(double data) {
        super(293, data);
    }
}
