package org.quickfix.field;
import org.quickfix.StringField;
import java.util.Date;

public class QuoteReqID extends StringField {

    public QuoteReqID() {
        super(131);
    }
    public QuoteReqID(String data) {
        super(131, data);
    }
}
