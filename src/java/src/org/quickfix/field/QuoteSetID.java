package org.quickfix.field;
import org.quickfix.StringField;
import java.util.Date;

public class QuoteSetID extends StringField {

    public QuoteSetID() {
        super(302);
    }
    public QuoteSetID(String data) {
        super(302, data);
    }
}
