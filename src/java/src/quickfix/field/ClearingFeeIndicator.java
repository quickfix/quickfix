package quickfix.field; 
import quickfix.StringField; 
import java.util.Date; 

public class ClearingFeeIndicator extends StringField 
{ 
  public static final int FIELD = 635; 
public static final String CBOE_MEMBER = "B"; 
public static final String NON_MEMBER_AND_CUSTOMER = "C"; 
public static final String EQUITY_MEMBER_AND_CLEARING_MEMBER = "E"; 
public static final String FULL_AND_ASSOCIATE_MEMBER_TRADING_FOR_OWN_ACCOUNT_AND_AS_FLOOR_BROKERS = "F"; 
public static final String FIRMS_106H_AND_106J = "H"; 
public static final String GIM_IDEM_AND_COM_MEMBERSHIP_INTEREST_HOLDERS = "I"; 
public static final String LESSEE_AND_106F_EMPLOYEES = "L"; 
public static final String ALL_OTHER_OWNERSHIP_TYPES = "M"; 
public static final String _1ST_YEAR_DELEGATE_TRADING_FOR_OWN_ACCOUNT = "1"; 
public static final String _2ND_YEAR_DELEGATE_TRADING_FOR_OWN_ACCOUNT = "2"; 
public static final String _3RD_YEAR_DELEGATE_TRADING_FOR_OWN_ACCOUNT = "3"; 
public static final String _4TH_YEAR_DELEGATE_TRADING_FOR_OWN_ACCOUNT = "4"; 
public static final String _5TH_YEAR_DELEGATE_TRADING_FOR_OWN_ACCOUNT = "5"; 
public static final String _6TH_YEAR_DELEGATE_TRADING_FOR_OWN_ACCOUNT = "9"; 

  public ClearingFeeIndicator() 
  { 
    super(635);
  } 
  public ClearingFeeIndicator(String data) 
  { 
    super(635, data);
  } 
} 
