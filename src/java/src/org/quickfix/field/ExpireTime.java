package org.quickfix.field;
import org.quickfix.UtcTimeStampField;
import java.util.Date;

public class ExpireTime extends UtcTimeStampField {

    public ExpireTime() {
        super(126);
    }
    public ExpireTime(Date data) {
        super(126, data);
    }
}
