package org.quickfix.field;
import org.quickfix.StringField;
import java.util.Date;

public class TargetCompID extends StringField {

    public TargetCompID() {
        super(56);
    }
    public TargetCompID(String data) {
        super(56, data);
    }
}
