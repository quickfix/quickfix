package org.quickfix.field;
import org.quickfix.BooleanField;
import java.util.Date;

public class ResetSeqNumFlag extends BooleanField {
    public static final boolean YES_RESET_SEQUENCE_NUMBERS = true;
    public static final boolean NO = false;

    public ResetSeqNumFlag() {
        super(141);
    }
    public ResetSeqNumFlag(boolean data) {
        super(141, data);
    }
}
