package org.quickfix.field;
import org.quickfix.CharField;
import java.util.Date;

public class MDUpdateAction extends CharField {
    public static final char NEW = '0';
    public static final char CHANGE = '1';
    public static final char DELETE = '2';

    public MDUpdateAction() {
        super(279);
    }
    public MDUpdateAction(char data) {
        super(279, data);
    }
}
