package org.quickfix.field;
import org.quickfix.IntField;
import java.util.Date;

public class NoRoutingIDs extends IntField {

    public NoRoutingIDs() {
        super(215);
    }
    public NoRoutingIDs(int data) {
        super(215, data);
    }
}
