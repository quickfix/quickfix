package org.quickfix.field;
import org.quickfix.UtcTimeOnlyField;
import java.util.Date;

public class MDEntryTime extends UtcTimeOnlyField {

    public MDEntryTime() {
        super(273);
    }
    public MDEntryTime(Date data) {
        super(273, data);
    }
}
