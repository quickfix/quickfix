package org.quickfix.field; 
import org.quickfix.IntField; 
import java.util.Date; 

public class TaxAdvantageType extends IntField 
{ 
  public static final int FIELD = 495; 
public static final int NONE = 0; 
public static final int MAXI_ISAUK = 1; 
public static final int TESSAUK = 2; 
public static final int MINI_CASH_ISAUK = 3; 
public static final int MINI_STOCKS_AND_SHARES_ISAUK = 4; 
public static final int MINI_INSURANCE_ISAUK = 5; 
public static final int CURRENT_YEAR_PAYMENT_US = 6; 
public static final int PRIOR_YEAR_PAYMENT_US = 7; 
public static final int ASSET_TRANSFER_US = 8; 
public static final int EMPLOYEE_PRIOR_YEAR_US = 9; 
public static final int EMPLOYEE_CURRENT_YEAR_US = 10; 
public static final int EMPLOYER_PRIOR_YEAR_US = 11; 
public static final int EMPLOYER_CURRENT_YEAR_US = 12; 
public static final int NONFUND_PROTOTYPE_IRAUS = 13; 
public static final int NONFUND_QUALIFIED_PLAN_US = 14; 
public static final int DEFINED_CONTRIBUTION_PLAN_US = 15; 
public static final int INDIVIDUAL_RETIREMENT_ACCOUNT_US = 16; 
public static final int INDIVIDUAL_RETIREMENT_ACCOUNT_ROLLOVER_US = 17; 
public static final int KEOGHUS = 18; 
public static final int PROFIT_SHARING_PLAN_US = 19; 
public static final int US_401K = 20; 
public static final int SELF_DIRECTED_IRAUS = 21; 
public static final int US_403B = 22; 
public static final int US_457 = 23; 
public static final int ROTH_IRAFUND_PROTOTYPE_US = 24; 
public static final int ROTH_IRANONPROTOTYPE_US = 25; 
public static final int ROTH_CONVERSION_IRAFUND_PROTOTYPE_US = 26; 
public static final int ROTH_CONVERSION_IRANONPROTOTYPE_US = 27; 
public static final int EDUCATION_IRAFUND_PROTOTYPE_US = 28; 
public static final int EDUCATION_IRANONPROTOTYPE_US = 29; 
public static final int OTHER = 999; 

  public TaxAdvantageType() 
  { 
    super(495);
  } 
  public TaxAdvantageType(int data) 
  { 
    super(495, data);
  } 
} 
