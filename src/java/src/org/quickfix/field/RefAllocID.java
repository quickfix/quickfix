package org.quickfix.field;
import org.quickfix.StringField;
import java.util.Date;

public class RefAllocID extends StringField {

    public RefAllocID() {
        super(72);
    }
    public RefAllocID(String data) {
        super(72, data);
    }
}
