package org.quickfix.field;
import org.quickfix.IntField;
import java.util.Date;

public class NoMDEntryTypes extends IntField {

    public NoMDEntryTypes() {
        super(267);
    }
    public NoMDEntryTypes(int data) {
        super(267, data);
    }
}
