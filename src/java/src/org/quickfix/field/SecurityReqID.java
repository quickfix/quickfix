package org.quickfix.field;
import org.quickfix.StringField;
import java.util.Date;

public class SecurityReqID extends StringField {

    public SecurityReqID() {
        super(320);
    }
    public SecurityReqID(String data) {
        super(320, data);
    }
}
