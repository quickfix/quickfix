package org.quickfix.field;
import org.quickfix.StringField;
import java.util.Date;

public class ExecRefID extends StringField {

    public ExecRefID() {
        super(19);
    }
    public ExecRefID(String data) {
        super(19, data);
    }
}
