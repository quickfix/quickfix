package org.quickfix.field;
import org.quickfix.StringField;
import java.util.Date;

public class EncodedAllocText extends StringField {

    public EncodedAllocText() {
        super(361);
    }
    public EncodedAllocText(String data) {
        super(361, data);
    }
}
