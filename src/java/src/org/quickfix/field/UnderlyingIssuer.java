package org.quickfix.field;
import org.quickfix.StringField;
import java.util.Date;

public class UnderlyingIssuer extends StringField {

    public UnderlyingIssuer() {
        super(306);
    }
    public UnderlyingIssuer(String data) {
        super(306, data);
    }
}
