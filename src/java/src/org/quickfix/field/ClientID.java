package org.quickfix.field;
import org.quickfix.StringField;
import java.util.Date;

public class ClientID extends StringField {

    public ClientID() {
        super(109);
    }
    public ClientID(String data) {
        super(109, data);
    }
}
