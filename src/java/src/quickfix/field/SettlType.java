package quickfix.field; 
import quickfix.StringField; 
import java.util.Date; 

public class SettlType extends StringField 
{ 
  public static final int FIELD = 63; 
public static final String REGULAR = "0"; 
public static final String CASH = "1"; 
public static final String NEXT_DAY = "2"; 
public static final String T_PLUS_2 = "3"; 
public static final String T_PLUS_3 = "4"; 
public static final String T_PLUS_4 = "5"; 
public static final String FUTURE = "6"; 
public static final String WHEN_AND_IF_ISSUED = "7"; 
public static final String SELLERS_OPTION = "8"; 
public static final String T_PLUS_5 = "9"; 
public static final String FX_SPOT_NEXT_SETTLEMENT = "C"; 
public static final String BROKEN_DATE = "B"; 

  public SettlType() 
  { 
    super(63);
  } 
  public SettlType(String data) 
  { 
    super(63, data);
  } 
} 
