package org.quickfix.field;
import org.quickfix.UtcTimeStampField;
import java.util.Date;

public class ValidUntilTime extends UtcTimeStampField {

    public ValidUntilTime() {
        super(62);
    }
    public ValidUntilTime(Date data) {
        super(62, data);
    }
}
