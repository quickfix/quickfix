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
