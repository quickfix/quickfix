package org.quickfix.field;
import org.quickfix.IntField;
import java.util.Date;

public class NoContraBrokers extends IntField {

    public NoContraBrokers() {
        super(382);
    }
    public NoContraBrokers(int data) {
        super(382, data);
    }
}
