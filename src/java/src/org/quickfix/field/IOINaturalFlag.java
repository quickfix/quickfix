package org.quickfix.field;
import org.quickfix.BooleanField;
import java.util.Date;

public class IOINaturalFlag extends BooleanField {
    public static final boolean NATURAL = true;
    public static final boolean NOT_NATURAL = false;

    public IOINaturalFlag() {
        super(130);
    }
    public IOINaturalFlag(boolean data) {
        super(130, data);
    }
}
