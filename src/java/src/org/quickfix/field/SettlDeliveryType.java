package org.quickfix.field;
import org.quickfix.IntField;
import java.util.Date;

public class SettlDeliveryType extends IntField {

    public SettlDeliveryType() {
        super(172);
    }
    public SettlDeliveryType(int data) {
        super(172, data);
    }
}
