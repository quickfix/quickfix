package org.quickfix.field;
import org.quickfix.StringField;
import java.util.Date;

public class OnBehalfOfCompID extends StringField {

    public OnBehalfOfCompID() {
        super(115);
    }
    public OnBehalfOfCompID(String data) {
        super(115, data);
    }
}
