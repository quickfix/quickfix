package org.quickfix.field;
import org.quickfix.StringField;
import java.util.Date;

public class DlvyInst extends StringField {

    public DlvyInst() {
        super(86);
    }
    public DlvyInst(String data) {
        super(86, data);
    }
}
