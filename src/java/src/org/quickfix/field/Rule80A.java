package org.quickfix.field;
import org.quickfix.CharField;
import java.util.Date;

public class Rule80A extends CharField {
    public static final char AGENCY_SINGLE_ORDER = 'A';
    public static final char SHORT_EXEMPT_TRANSACTION_B = 'B';
    public static final char PROGRAM_ORDER_NONINDEX_ARB_FOR_MEMBER_FIRMORG = 'C';
    public static final char PROGRAM_ORDER_INDEX_ARB_FOR_MEMBER_FIRMORG = 'D';
    public static final char REGISTERED_EQUITY_MARKET_MAKER_TRADES = 'E';
    public static final char SHORT_EXEMPT_TRANSACTION_F = 'F';
    public static final char SHORT_EXEMPT_TRANSACTION_H = 'H';
    public static final char PROGRAM_ORDER_INDEX_ARB_FOR_INDIVIDUAL_CUSTOMER = 'J';
    public static final char PROGRAM_ORDER_NONINDEX_ARB_FOR_INDIVIDUAL_CUSTOMER = 'K';
    public static final char SHORT_EXEMPT_AFFILIATED = 'L';
    public static final char PROGRAM_ORDER_INDEX_ARB_FOR_OTHER_MEMBER = 'M';
    public static final char PROGRAM_ORDER_NONINDEX_ARB_FOR_OTHER_MEMBER = 'N';
    public static final char COMPETING_DEALER_TRADES_O = 'O';
    public static final char PRINCIPAL = 'P';
    public static final char COMPETING_DEALER_TRADES_R = 'R';
    public static final char SPECIALIST_TRADES = 'S';
    public static final char COMPETING_DEALER_TRADES_T = 'T';
    public static final char PROGRAM_ORDER_INDEX_ARB_FOR_OTHER_AGENCY = 'U';
    public static final char ALL_OTHER_ORDERS_AS_AGENT_FOR_OTHER_MEMBER = 'W';
    public static final char SHORT_EXEMPT_NOT_AFFILIATED = 'X';
    public static final char PROGRAM_ORDER_NONINDEX_ARB_FOR_OTHER_AGENCY = 'Y';
    public static final char SHORT_EXEMPT_NONMEMBER = 'Z';

    public Rule80A() {
        super(47);
    }
    public Rule80A(char data) {
        super(47, data);
    }
}
