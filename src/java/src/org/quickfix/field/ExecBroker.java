package org.quickfix.field;
import org.quickfix.StringField;
import java.util.Date;

public class ExecBroker extends StringField {

    public ExecBroker() {
        super(76);
    }
    public ExecBroker(String data) {
        super(76, data);
    }
}
