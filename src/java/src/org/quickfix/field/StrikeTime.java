package org.quickfix.field;
import org.quickfix.UtcTimeStampField;
import java.util.Date;

public class StrikeTime extends UtcTimeStampField {

    public StrikeTime() {
        super(443);
    }
    public StrikeTime(Date data) {
        super(443, data);
    }
}
