package org.quickfix.field;
import org.quickfix.StringField;
import java.util.Date;

public class UnderlyingMaturityDay extends StringField {

    public UnderlyingMaturityDay() {
        super(314);
    }
    public UnderlyingMaturityDay(String data) {
        super(314, data);
    }
}
