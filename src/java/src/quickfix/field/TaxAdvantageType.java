package quickfix.field; 
import quickfix.IntField; 
import java.util.Date; 

public class TaxAdvantageType extends IntField 
{ 
  public static final int FIELD = 495; 
public static final int NONE = 0; 
public static final int MAXI_ISA = 1; 
public static final int TESSA = 2; 
public static final int MINI_CASH_ISA = 3; 
public static final int MINI_STOCKS_AND_SHARES_ISA = 4; 
public static final int MINI_INSURANCE_ISA = 5; 
public static final int CURRENT_YEAR_PAYMENT = 6; 
public static final int PRIOR_YEAR_PAYMENT = 7; 
public static final int ASSET_TRANSFER = 8; 
public static final int EMPLOYEE_PRIOR_YEAR = 9; 
public static final int EMPLOYEE = 10; 
public static final int EMPLOYER = 11; 
public static final int EMPLOYER2 = 12; 
public static final int NON_FUND_PROTOTYPE_IRA = 13; 
public static final int NON_FUND_QUALIFIED_PLAN = 14; 
public static final int DEFINED_CONTRIBUTION_PLAN = 15; 
public static final int INDIVIDUAL_RETIREMENT_ACCOUNT = 16; 
public static final int INDIVIDUAL_RETIREMENT_ACCOUNT2 = 17; 
public static final int KEOGH = 18; 
public static final int PROFIT_SHARING_PLAN = 19; 
public static final int _401_K = 20; 
public static final int SELF_DIRECTED_IRA = 21; 
public static final int _403_B = 22; 
public static final int _457 = 23; 
public static final int ROTH_IRA = 24; 
public static final int ROTH_IRA2 = 25; 
public static final int ROTH_CONVERSION_IRA = 26; 
public static final int ROTH_CONVERSION_IRA2 = 27; 
public static final int EDUCATION_IRA = 28; 
public static final int EDUCATION_IRA2 = 29; 
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
