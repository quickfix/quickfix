package org.quickfix.field;
import org.quickfix.IntField;
import java.util.Date;

public class NetGrossInd extends IntField {

    public NetGrossInd() {
        super(430);
    }
    public NetGrossInd(int data) {
        super(430, data);
    }
}
