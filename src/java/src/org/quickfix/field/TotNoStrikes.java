package org.quickfix.field;
import org.quickfix.IntField;
import java.util.Date;

public class TotNoStrikes extends IntField {

    public TotNoStrikes() {
        super(422);
    }
    public TotNoStrikes(int data) {
        super(422, data);
    }
}
