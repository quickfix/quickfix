package org.quickfix.field;
import org.quickfix.StringField;
import java.util.Date;

public class ClientBidID extends StringField {

    public ClientBidID() {
        super(391);
    }
    public ClientBidID(String data) {
        super(391, data);
    }
}
