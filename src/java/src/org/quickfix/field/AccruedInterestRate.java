package org.quickfix.field;
import org.quickfix.DoubleField;
import java.util.Date;

public class AccruedInterestRate extends DoubleField {

    public AccruedInterestRate() {
        super(158);
    }
    public AccruedInterestRate(double data) {
        super(158, data);
    }
}
