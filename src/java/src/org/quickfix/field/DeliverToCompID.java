package org.quickfix.field;
import org.quickfix.StringField;
import java.util.Date;

public class DeliverToCompID extends StringField {

    public DeliverToCompID() {
        super(128);
    }
    public DeliverToCompID(String data) {
        super(128, data);
    }
}
