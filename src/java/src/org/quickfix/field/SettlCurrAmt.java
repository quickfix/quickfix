package org.quickfix.field;
import org.quickfix.DoubleField;
import java.util.Date;

public class SettlCurrAmt extends DoubleField {

    public SettlCurrAmt() {
        super(119);
    }
    public SettlCurrAmt(double data) {
        super(119, data);
    }
}
