package org.quickfix.field;
import org.quickfix.StringField;
import java.util.Date;

public class ExpireDate extends StringField {

    public ExpireDate() {
        super(432);
    }
    public ExpireDate(String data) {
        super(432, data);
    }
}
