package org.quickfix.field;
import org.quickfix.StringField;
import java.util.Date;

public class AllocText extends StringField {

    public AllocText() {
        super(161);
    }
    public AllocText(String data) {
        super(161, data);
    }
}
