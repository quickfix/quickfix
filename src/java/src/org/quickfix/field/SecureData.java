package org.quickfix.field;
import org.quickfix.StringField;
import java.util.Date;

public class SecureData extends StringField {

    public SecureData() {
        super(91);
    }
    public SecureData(String data) {
        super(91, data);
    }
}
