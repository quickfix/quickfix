package org.quickfix.field;
import org.quickfix.CharField;
import java.util.Date;

public class HandlInst extends CharField {
    public static final char AUTOMATED_EXECUTION_ORDER_PRIVATE_NO_BROKER_INTERVENTION = '1';
    public static final char AUTOMATED_EXECUTION_ORDER_PUBLIC_BROKER_INTERVENTION_OK = '2';
    public static final char MANUAL_ORDER_BEST_EXECUTION = '3';

    public HandlInst() {
        super(21);
    }
    public HandlInst(char data) {
        super(21, data);
    }
}
