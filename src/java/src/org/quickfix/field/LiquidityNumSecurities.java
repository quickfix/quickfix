package org.quickfix.field;
import org.quickfix.IntField;
import java.util.Date;

public class LiquidityNumSecurities extends IntField {

    public LiquidityNumSecurities() {
        super(441);
    }
    public LiquidityNumSecurities(int data) {
        super(441, data);
    }
}
