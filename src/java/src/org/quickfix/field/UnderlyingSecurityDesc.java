package org.quickfix.field;
import org.quickfix.StringField;
import java.util.Date;

public class UnderlyingSecurityDesc extends StringField {

    public UnderlyingSecurityDesc() {
        super(307);
    }
    public UnderlyingSecurityDesc(String data) {
        super(307, data);
    }
}
