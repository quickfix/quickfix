package org.quickfix.field;
import org.quickfix.IntField;
import java.util.Date;

public class QuoteResponseLevel extends IntField {

    public QuoteResponseLevel() {
        super(301);
    }
    public QuoteResponseLevel(int data) {
        super(301, data);
    }
}
