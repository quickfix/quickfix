package org.quickfix.field;
import org.quickfix.IntField;
import java.util.Date;

public class ProgPeriodInterval extends IntField {

    public ProgPeriodInterval() {
        super(415);
    }
    public ProgPeriodInterval(int data) {
        super(415, data);
    }
}
