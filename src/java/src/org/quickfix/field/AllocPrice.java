package org.quickfix.field;
import org.quickfix.DoubleField;
import java.util.Date;

public class AllocPrice extends DoubleField {

    public AllocPrice() {
        super(366);
    }
    public AllocPrice(double data) {
        super(366, data);
    }
}
