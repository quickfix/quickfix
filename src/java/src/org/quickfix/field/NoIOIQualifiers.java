package org.quickfix.field;
import org.quickfix.IntField;
import java.util.Date;

public class NoIOIQualifiers extends IntField {

    public NoIOIQualifiers() {
        super(199);
    }
    public NoIOIQualifiers(int data) {
        super(199, data);
    }
}
