package org.quickfix.field;
import org.quickfix.CharField;
import java.util.Date;

public class MiscFeeType extends CharField {
    public static final char REGULATORY = '1';
    public static final char TAX = '2';
    public static final char LOCAL_COMMISSION = '3';
    public static final char EXCHANGE_FEES = '4';
    public static final char STAMP = '5';
    public static final char LEVY = '6';
    public static final char OTHER = '7';
    public static final char MARKUP = '8';
    public static final char CONSUMPTION_TAX = '9';

    public MiscFeeType() {
        super(139);
    }
    public MiscFeeType(char data) {
        super(139, data);
    }
}
