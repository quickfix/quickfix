package org.quickfix.field;
import org.quickfix.CharField;
import java.util.Date;

public class ProcessCode extends CharField {
    public static final char REGULAR = '0';
    public static final char SOFT_DOLLAR = '1';
    public static final char STEPIN = '2';
    public static final char STEPOUT = '3';
    public static final char SOFTDOLLAR_STEPIN = '4';
    public static final char SOFTDOLLAR_STEPOUT = '5';
    public static final char PLAN_SPONSOR = '6';

    public ProcessCode() {
        super(81);
    }
    public ProcessCode(char data) {
        super(81, data);
    }
}
