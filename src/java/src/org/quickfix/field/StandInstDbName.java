package org.quickfix.field;
import org.quickfix.StringField;
import java.util.Date;

public class StandInstDbName extends StringField {

    public StandInstDbName() {
        super(170);
    }
    public StandInstDbName(String data) {
        super(170, data);
    }
}
