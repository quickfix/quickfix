package org.quickfix.field;
import org.quickfix.BooleanField;
import java.util.Date;

public class PossResend extends BooleanField {

    public PossResend() {
        super(97);
    }
    public PossResend(boolean data) {
        super(97, data);
    }
}
