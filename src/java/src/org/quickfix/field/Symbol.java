package org.quickfix.field;
import org.quickfix.StringField;
import java.util.Date;

public class Symbol extends StringField {

    public Symbol() {
        super(55);
    }
    public Symbol(String data) {
        super(55, data);
    }
}
