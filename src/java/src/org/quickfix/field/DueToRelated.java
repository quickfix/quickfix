package org.quickfix.field;
import org.quickfix.BooleanField;
import java.util.Date;

public class DueToRelated extends BooleanField {
    public static final boolean HALT_WAS_DUE_TO_RELATED_SECURITY_BEING_HALTED = true;
    public static final boolean HALT_WAS_NOT_RELATED_TO_A_HALT_OF_THE_RELATED_SECURITY = false;

    public DueToRelated() {
        super(329);
    }
    public DueToRelated(boolean data) {
        super(329, data);
    }
}
