package org.quickfix.field;
import org.quickfix.StringField;
import java.util.Date;

public class FutSettDate extends StringField {

    public FutSettDate() {
        super(64);
    }
    public FutSettDate(String data) {
        super(64, data);
    }
}
