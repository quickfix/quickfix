package org.quickfix.field;
import org.quickfix.StringField;
import java.util.Date;

public class SettlInstRefID extends StringField {

    public SettlInstRefID() {
        super(214);
    }
    public SettlInstRefID(String data) {
        super(214, data);
    }
}
