package org.quickfix.field;
import org.quickfix.IntField;
import java.util.Date;

public class BusinessRejectReason extends IntField {
    public static final int OTHER = 0;
    public static final int UNKOWN_ID = 1;
    public static final int UNKNOWN_SECURITY = 2;
    public static final int UNSUPPORTED_MESSAGE_TYPE = 3;
    public static final int APPLICATION_NOT_AVAILABLE = 4;
    public static final int CONDITIONALLY_REQUIRED_FIELD_MISSING = 5;

    public BusinessRejectReason() {
        super(380);
    }
    public BusinessRejectReason(int data) {
        super(380, data);
    }
}
