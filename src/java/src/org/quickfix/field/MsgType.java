package org.quickfix.field;
import org.quickfix.StringField;
import java.util.Date;

public class MsgType extends StringField {

    public MsgType() {
        super(35);
    }
    public MsgType(String data) {
        super(35, data);
    }
}
