package org.quickfix.field;
import org.quickfix.StringField;
import java.util.Date;

public class UnderlyingSecurityType extends StringField {

    public UnderlyingSecurityType() {
        super(310);
    }
    public UnderlyingSecurityType(String data) {
        super(310, data);
    }
}
