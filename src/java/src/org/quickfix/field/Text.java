package org.quickfix.field;
import org.quickfix.StringField;
import java.util.Date;

public class Text extends StringField {

    public Text() {
        super(58);
    }
    public Text(String data) {
        super(58, data);
    }
}
