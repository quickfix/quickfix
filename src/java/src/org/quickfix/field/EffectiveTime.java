package org.quickfix.field;
import org.quickfix.UtcTimeStampField;
import java.util.Date;

public class EffectiveTime extends UtcTimeStampField {

    public EffectiveTime() {
        super(168);
    }
    public EffectiveTime(Date data) {
        super(168, data);
    }
}
