package org.quickfix.field;
import org.quickfix.CharField;
import java.util.Date;

public class CxlType extends CharField {

    public CxlType() {
        super(125);
    }
    public CxlType(char data) {
        super(125, data);
    }
}
