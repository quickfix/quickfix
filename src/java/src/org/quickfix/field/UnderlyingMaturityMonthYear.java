package org.quickfix.field;
import org.quickfix.StringField;
import java.util.Date;

public class UnderlyingMaturityMonthYear extends StringField {

    public UnderlyingMaturityMonthYear() {
        super(313);
    }
    public UnderlyingMaturityMonthYear(String data) {
        super(313, data);
    }
}
