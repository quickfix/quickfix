package org.quickfix.field;
import org.quickfix.IntField;
import java.util.Date;

public class QuoteRequestType extends IntField {

    public QuoteRequestType() {
        super(303);
    }
    public QuoteRequestType(int data) {
        super(303, data);
    }
}
