package org.quickfix.field;
import org.quickfix.StringField;
import java.util.Date;

public class StandInstDbID extends StringField {

    public StandInstDbID() {
        super(171);
    }
    public StandInstDbID(String data) {
        super(171, data);
    }
}
