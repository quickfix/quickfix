package org.quickfix.field;
import org.quickfix.DoubleField;
import java.util.Date;

public class MinQty extends DoubleField {

    public MinQty() {
        super(110);
    }
    public MinQty(double data) {
        super(110, data);
    }
}
