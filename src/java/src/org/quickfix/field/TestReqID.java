package org.quickfix.field;
import org.quickfix.StringField;
import java.util.Date;

public class TestReqID extends StringField {

    public TestReqID() {
        super(112);
    }
    public TestReqID(String data) {
        super(112, data);
    }
}
