package org.quickfix.field;
import org.quickfix.StringField;
import java.util.Date;

public class ExDestination extends StringField {

    public ExDestination() {
        super(100);
    }
    public ExDestination(String data) {
        super(100, data);
    }
}
