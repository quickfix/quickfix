package org.quickfix.field;
import org.quickfix.CharField;
import java.util.Date;

public class SettlInstSource extends CharField {
    public static final char BROKER = '1';
    public static final char INSTITUTION = '2';

    public SettlInstSource() {
        super(165);
    }
    public SettlInstSource(char data) {
        super(165, data);
    }
}
