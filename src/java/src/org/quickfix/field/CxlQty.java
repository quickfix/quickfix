package org.quickfix.field;
import org.quickfix.DoubleField;
import java.util.Date;

public class CxlQty extends DoubleField {

    public CxlQty() {
        super(84);
    }
    public CxlQty(double data) {
        super(84, data);
    }
}
