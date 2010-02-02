package quickfix.field; 
import quickfix.StringField; 
import java.util.Date; 

public class MiscFeeType extends StringField 
{ 
  public static final int FIELD = 139; 
public static final String REGULATORY = "1"; 
public static final String TAX = "2"; 
public static final String LOCAL_COMMISSION = "3"; 
public static final String EXCHANGE_FEES = "4"; 
public static final String STAMP = "5"; 
public static final String LEVY = "6"; 
public static final String OTHER = "7"; 
public static final String MARKUP = "8"; 
public static final String CONSUMPTION_TAX = "9"; 
public static final String PER_TRANSACTION = "10"; 
public static final String CONVERSION = "11"; 
public static final String AGENT = "12"; 
public static final String TRANSFER_FEE = "13"; 
public static final String SECURITY_LENDING = "14"; 

  public MiscFeeType() 
  { 
    super(139);
  } 
  public MiscFeeType(String data) 
  { 
    super(139, data);
  } 
} 
