package org.quickfix.field;
import org.quickfix.UtcTimeStampField;
import java.util.Date;

public class QuoteSetValidUntilTime extends UtcTimeStampField {

    public QuoteSetValidUntilTime() {
        super(367);
    }
    public QuoteSetValidUntilTime(Date data) {
        super(367, data);
    }
}
