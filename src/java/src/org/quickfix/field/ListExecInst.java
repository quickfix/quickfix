package org.quickfix.field;
import org.quickfix.StringField;
import java.util.Date;

public class ListExecInst extends StringField {

    public ListExecInst() {
        super(69);
    }
    public ListExecInst(String data) {
        super(69, data);
    }
}
