package org.quickfix.field;
import org.quickfix.UtcTimeStampField;
import java.util.Date;

public class OnBehalfOfSendingTime extends UtcTimeStampField {

    public OnBehalfOfSendingTime() {
        super(370);
    }
    public OnBehalfOfSendingTime(Date data) {
        super(370, data);
    }
}
