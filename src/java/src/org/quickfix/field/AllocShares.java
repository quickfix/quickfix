package org.quickfix.field;
import org.quickfix.DoubleField;
import java.util.Date;

public class AllocShares extends DoubleField {

    public AllocShares() {
        super(80);
    }
    public AllocShares(double data) {
        super(80, data);
    }
}
