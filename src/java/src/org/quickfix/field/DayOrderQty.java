package org.quickfix.field;
import org.quickfix.DoubleField;
import java.util.Date;

public class DayOrderQty extends DoubleField {

    public DayOrderQty() {
        super(424);
    }
    public DayOrderQty(double data) {
        super(424, data);
    }
}
