package org.quickfix.field;
import org.quickfix.BooleanField;
import java.util.Date;

public class ForexReq extends BooleanField {
    public static final boolean YES = true;
    public static final boolean NO = false;

    public ForexReq() {
        super(121);
    }
    public ForexReq(boolean data) {
        super(121, data);
    }
}
