package org.quickfix.field;
import org.quickfix.CharField;
import java.util.Date;

public class TimeInForce extends CharField {
    public static final char DAY = '0';
    public static final char GOOD_TILL_CANCEL = '1';
    public static final char AT_THE_OPENING = '2';
    public static final char IMMEDIATE_OR_CANCEL = '3';
    public static final char FILL_OR_KILL = '4';
    public static final char GOOD_TILL_CROSSING = '5';
    public static final char GOOD_TILL_DATE = '6';

    public TimeInForce() {
        super(59);
    }
    public TimeInForce(char data) {
        super(59, data);
    }
}
