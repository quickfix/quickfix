package org.quickfix.field;
import org.quickfix.StringField;
import java.util.Date;

public class UnderlyingSymbol extends StringField {

    public UnderlyingSymbol() {
        super(311);
    }
    public UnderlyingSymbol(String data) {
        super(311, data);
    }
}
