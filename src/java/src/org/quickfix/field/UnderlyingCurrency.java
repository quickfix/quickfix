package org.quickfix.field;
import org.quickfix.StringField;
import java.util.Date;

public class UnderlyingCurrency extends StringField {

    public UnderlyingCurrency() {
        super(318);
    }
    public UnderlyingCurrency(String data) {
        super(318, data);
    }
}
