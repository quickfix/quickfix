package org.quickfix.field;
import org.quickfix.StringField;
import java.util.Date;

public class ContraTrader extends StringField {

    public ContraTrader() {
        super(337);
    }
    public ContraTrader(String data) {
        super(337, data);
    }
}
