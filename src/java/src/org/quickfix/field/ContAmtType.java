package org.quickfix.field; 
import org.quickfix.IntField; 
import java.util.Date; 

public class ContAmtType extends IntField 
{ 
  public static final int FIELD = 519; 
public static final int COMMISSION_AMT = 1; 
public static final int COMMISSION_PCT = 2; 
public static final int INITIAL_CHARGE_AMT = 3; 
public static final int INITIAL_CHARGE_PCT = 4; 
public static final int DISCOUNT_AMT = 5; 
public static final int DISCOUNT_PCT = 6; 
public static final int DILUTION_LEVY_AMT = 7; 
public static final int DILUTION_LEVY_PCT = 8; 
public static final int EXIT_CHARGE_AMT = 9; 
public static final int EXIT_CHARGE_PCT = 10; 
public static final int FUND_BASED_RENEWAL_COMM = 11; 
public static final int PROJECTED_FUND_VALUE = 12; 
public static final int FUND_BASED_RENEWAL_COMM_AMT_ORD = 13; 
public static final int FUND_BASED_RENEWAL_COMM_AMT_PROJ = 14; 
public static final int NET_SETTLEMENT_AMOUNT = 15; 

  public ContAmtType() 
  { 
    super(519);
  } 
  public ContAmtType(int data) 
  { 
    super(519, data);
  } 
} 
