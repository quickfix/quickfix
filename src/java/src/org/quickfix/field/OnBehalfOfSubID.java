package org.quickfix.field;
import org.quickfix.StringField;
import java.util.Date;

public class OnBehalfOfSubID extends StringField {

    public OnBehalfOfSubID() {
        super(116);
    }
    public OnBehalfOfSubID(String data) {
        super(116, data);
    }
}
