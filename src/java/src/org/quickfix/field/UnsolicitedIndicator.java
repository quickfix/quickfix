package org.quickfix.field;
import org.quickfix.BooleanField;
import java.util.Date;

public class UnsolicitedIndicator extends BooleanField {
    public static final boolean MESSAGE_IS_BEING_SENT_UNSOLICITED = true;
    public static final boolean MESSAGE_IS_BEING_SENT_AS_A_RESULT_OF_A_PRIOR_REQUEST = false;

    public UnsolicitedIndicator() {
        super(325);
    }
    public UnsolicitedIndicator(boolean data) {
        super(325, data);
    }
}
