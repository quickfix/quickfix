package org.quickfix.field;
import org.quickfix.CharField;
import java.util.Date;

public class DKReason extends CharField {
    public static final char UNKNOWN_SYMBOL = 'A';
    public static final char WRONG_SIDE = 'B';
    public static final char QUANTITY_EXCEEDS_ORDER = 'C';
    public static final char NO_MATCHING_ORDER = 'D';
    public static final char PRICE_EXCEEDS_LIMIT = 'E';

    public DKReason() {
        super(127);
    }
    public DKReason(char data) {
        super(127, data);
    }
}
