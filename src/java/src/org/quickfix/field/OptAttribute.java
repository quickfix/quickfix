package org.quickfix.field;
import org.quickfix.CharField;
import java.util.Date;

public class OptAttribute extends CharField {

    public OptAttribute() {
        super(206);
    }
    public OptAttribute(char data) {
        super(206, data);
    }
}
