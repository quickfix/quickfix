package org.quickfix.field;
import org.quickfix.IntField;
import java.util.Date;

public class AllocStatus extends IntField {
    public static final int ACCEPTED = 0;
    public static final int REJECTED = 1;
    public static final int PARTIAL_ACCEPT = 2;
    public static final int RECEIVED = 3;

    public AllocStatus() {
        super(87);
    }
    public AllocStatus(int data) {
        super(87, data);
    }
}
