package org.quickfix.field;
import org.quickfix.StringField;
import java.util.Date;

public class DeliverToLocationID extends StringField {

    public DeliverToLocationID() {
        super(145);
    }
    public DeliverToLocationID(String data) {
        super(145, data);
    }
}
