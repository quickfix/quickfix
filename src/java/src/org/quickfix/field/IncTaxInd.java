package org.quickfix.field;
import org.quickfix.IntField;
import java.util.Date;

public class IncTaxInd extends IntField {

    public IncTaxInd() {
        super(416);
    }
    public IncTaxInd(int data) {
        super(416, data);
    }
}
