package org.quickfix.field;
import org.quickfix.StringField;
import java.util.Date;

public class SenderCompID extends StringField {

    public SenderCompID() {
        super(49);
    }
    public SenderCompID(String data) {
        super(49, data);
    }
}
