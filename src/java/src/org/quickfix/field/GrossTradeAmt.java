package org.quickfix.field;
import org.quickfix.DoubleField;
import java.util.Date;

public class GrossTradeAmt extends DoubleField {

    public GrossTradeAmt() {
        super(381);
    }
    public GrossTradeAmt(double data) {
        super(381, data);
    }
}
