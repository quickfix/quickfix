package org.quickfix.field;
import org.quickfix.StringField;
import java.util.Date;

public class EncodedHeadline extends StringField {

    public EncodedHeadline() {
        super(359);
    }
    public EncodedHeadline(String data) {
        super(359, data);
    }
}
