package org.quickfix.field;
import org.quickfix.StringField;
import java.util.Date;

public class MDEntryBuyer extends StringField {

    public MDEntryBuyer() {
        super(288);
    }
    public MDEntryBuyer(String data) {
        super(288, data);
    }
}
