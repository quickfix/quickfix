package org.quickfix.field;
import org.quickfix.DoubleField;
import java.util.Date;

public class WtAverageLiquidity extends DoubleField {

    public WtAverageLiquidity() {
        super(410);
    }
    public WtAverageLiquidity(double data) {
        super(410, data);
    }
}
