package org.quickfix.field;
import org.quickfix.StringField;
import java.util.Date;

public class EncodedText extends StringField {

    public EncodedText() {
        super(355);
    }
    public EncodedText(String data) {
        super(355, data);
    }
}
