package org.quickfix.field;
import org.quickfix.BooleanField;
import java.util.Date;

public class LocateReqd extends BooleanField {
    public static final boolean YES = true;
    public static final boolean NO = false;

    public LocateReqd() {
        super(114);
    }
    public LocateReqd(boolean data) {
        super(114, data);
    }
}
