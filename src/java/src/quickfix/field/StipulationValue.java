package quickfix.field; 
import quickfix.StringField; 
import java.util.Date; 

public class StipulationValue extends StringField 
{ 
  public static final int FIELD = 234; 
public static final String SPECIAL_CUM_DIVIDEND = "CD"; 
public static final String SPECIAL_EX_DIVIDEND = "XD"; 
public static final String SPECIAL_CUM_COUPON = "CC"; 
public static final String SPECIAL_EX_COUPON = "XC"; 
public static final String SPECIAL_CUM_BONUS = "CB"; 
public static final String SPECIAL_EX_BONUS = "XB"; 
public static final String SPECIAL_CUM_RIGHTS = "CR"; 
public static final String SPECIAL_EX_RIGHTS = "XR"; 
public static final String SPECIAL_CUM_CAPITAL_REPAYMENTS = "CP"; 
public static final String SPECIAL_EX_CAPITAL_REPAYMENTS = "XP"; 
public static final String CASH_SETTLEMENT = "CS"; 
public static final String SPECIAL_PRICE = "SP"; 
public static final String REPORT_FOR_EUROPEAN_EQUITY_MARKET_SECURITIES = "TR"; 
public static final String GUARANTEED_DELIVERY = "GD"; 

  public StipulationValue() 
  { 
    super(234);
  } 
  public StipulationValue(String data) 
  { 
    super(234, data);
  } 
} 
