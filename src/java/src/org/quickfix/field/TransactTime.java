package org.quickfix.field;
import org.quickfix.UtcTimeStampField;
import java.util.Date;

public class TransactTime extends UtcTimeStampField {

    public TransactTime() {
        super(60);
    }
    public TransactTime(Date data) {
        super(60, data);
    }
}
