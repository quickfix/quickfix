package org.quickfix.field;
import org.quickfix.StringField;
import java.util.Date;

public class TradeDate extends StringField {

    public TradeDate() {
        super(75);
    }
    public TradeDate(String data) {
        super(75, data);
    }
}
