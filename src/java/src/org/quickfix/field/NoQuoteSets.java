package org.quickfix.field;
import org.quickfix.IntField;
import java.util.Date;

public class NoQuoteSets extends IntField {

    public NoQuoteSets() {
        super(296);
    }
    public NoQuoteSets(int data) {
        super(296, data);
    }
}
