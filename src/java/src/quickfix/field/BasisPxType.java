package quickfix.field; 
import quickfix.CharField; 
import java.util.Date; 

public class BasisPxType extends CharField 
{ 
  public static final int FIELD = 419; 
public static final char CLOSING_PRICE_AT_MORNING_SESSION = '2'; 
public static final char CLOSING_PRICE = '3'; 
public static final char CURRENT_PRICE = '4'; 
public static final char SQ = '5'; 
public static final char VWAP_THROUGH_A_DAY = '6'; 
public static final char VWAP_THROUGH_A_MORNING_SESSION = '7'; 
public static final char VWAP_THROUGH_AN_AFTERNOON_SESSION = '8'; 
public static final char VWAP_THROUGH_A_DAY_EXCEPT_YORI = '9'; 
public static final char VWAP_THROUGH_A_MORNING_SESSION_EXCEPT_YORI = 'A'; 
public static final char VWAP_THROUGH_AN_AFTERNOON_SESSION_EXCEPT_YORI = 'B'; 
public static final char STRIKE = 'C'; 
public static final char OPEN = 'D'; 
public static final char OTHERS = 'Z'; 

  public BasisPxType() 
  { 
    super(419);
  } 
  public BasisPxType(char data) 
  { 
    super(419, data);
  } 
} 
