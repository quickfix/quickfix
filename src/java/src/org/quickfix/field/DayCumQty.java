package org.quickfix.field;
import org.quickfix.DoubleField;
import java.util.Date;

public class DayCumQty extends DoubleField {

    public DayCumQty() {
        super(425);
    }
    public DayCumQty(double data) {
        super(425, data);
    }
}
