package org.quickfix.field;
import org.quickfix.StringField;
import java.util.Date;

public class RoutingID extends StringField {

    public RoutingID() {
        super(217);
    }
    public RoutingID(String data) {
        super(217, data);
    }
}
