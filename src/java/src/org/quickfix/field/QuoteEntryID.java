package org.quickfix.field;
import org.quickfix.StringField;
import java.util.Date;

public class QuoteEntryID extends StringField {

    public QuoteEntryID() {
        super(299);
    }
    public QuoteEntryID(String data) {
        super(299, data);
    }
}
