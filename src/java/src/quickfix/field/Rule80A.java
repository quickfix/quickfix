package org.quickfix.field; 
import org.quickfix.CharField; 
import java.util.Date; 

public class Rule80A extends CharField 
{ 
  public static final int FIELD = 47; 
public static final char AGENCY_SINGLE_ORDER = 'A'; 
public static final char SHORT_EXEMPT_TRANSACTION_REFER_TO_A_TYPE = 'B'; 
public static final char PROGRAM_ORDER_NON_INDEX_ARB_FOR_MEMBER_FIRM = 'C'; 
public static final char PROGRAM_ORDER_INDEX_ARB_FOR_MEMBER_FIRM = 'D'; 
public static final char SHORT_EXEMPT_TRANSACTION_FOR_PRINCIPAL = 'E'; 
public static final char SHORT_EXEMPT_TRANSACTION_REFER_TO_W_TYPE = 'F'; 
public static final char SHORT_EXEMPT_TRANSACTION_REFER_TO_I_TYPE = 'H'; 
public static final char INDIVIDUAL_INVESTOR = 'I'; 
public static final char PROGRAM_ORDER_INDEX_ARB_FOR_INDIVIDUAL_CUSTOMER = 'J'; 
public static final char PROGRAM_ORDER_NON_INDEX_ARB_FOR_INDIVIDUAL_CUSTOMER = 'K'; 
public static final char SHORT_EXEMPT_AFFILIATED = 'L'; 
public static final char PROGRAM_ORDER_INDEX_ARB_FOR_OTHER_MEMBER = 'M'; 
public static final char PROGRAM_ORDER_NON_INDEX_ARB_FOR_OTHER_MEMBER = 'N'; 
public static final char PROPRIETARY_AFFILIATED = 'O'; 
public static final char PRINCIPAL = 'P'; 
public static final char TRANSACTIONS_NON_MEMBER = 'R'; 
public static final char SPECIALIST_TRADES = 'S'; 
public static final char TRANSACTIONS_UNAFFILIATED_MEMBER = 'T'; 
public static final char PROGRAM_ORDER_INDEX_ARB_FOR_OTHER_AGENCY = 'U'; 
public static final char ALL_OTHER_ORDERS_AS_AGENT_FOR_OTHER_MEMBER = 'W'; 
public static final char SHORT_EXEMPT_NOT_AFFILIATED = 'X'; 
public static final char PROGRAM_ORDER_NON_INDEX_ARB_FOR_OTHER_AGENCY = 'Y'; 
public static final char SHORT_EXEMPT_NONMEMBER = 'Z'; 

  public Rule80A() 
  { 
    super(47);
  } 
  public Rule80A(char data) 
  { 
    super(47, data);
  } 
} 
