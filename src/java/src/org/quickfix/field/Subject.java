package org.quickfix.field;
import org.quickfix.StringField;
import java.util.Date;

public class Subject extends StringField {

    public Subject() {
        super(147);
    }
    public Subject(String data) {
        super(147, data);
    }
}
