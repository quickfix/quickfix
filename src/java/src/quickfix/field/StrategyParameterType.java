package quickfix.field; 
import quickfix.IntField; 
import java.util.Date; 

public class StrategyParameterType extends IntField 
{ 
  public static final int FIELD = 959; 
public static final int INT = 1; 
public static final int LENGTH = 2; 
public static final int NUMINGROUP = 3; 
public static final int SEQNUM = 4; 
public static final int TAGNUM = 5; 
public static final int FLOAT = 6; 
public static final int QTY = 7; 
public static final int PRICE = 8; 
public static final int PRICEOFFSET = 9; 
public static final int AMT = 10; 
public static final int PERCENTAGE = 11; 
public static final int CHAR = 12; 
public static final int BOOLEAN = 13; 
public static final int STRING = 14; 
public static final int MULTIPLECHARVALUE = 15; 
public static final int CURRENCY = 16; 
public static final int EXCHANGE = 17; 
public static final int MONTH_YEAR = 18; 
public static final int UTCTIMESTAMP = 19; 
public static final int UTCTIMEONLY = 20; 
public static final int LOCALMKTTIME = 21; 
public static final int UTCDATE = 22; 
public static final int DATA = 23; 
public static final int MULTIPLESTRINGVALUE = 24; 

  public StrategyParameterType() 
  { 
    super(959);
  } 
  public StrategyParameterType(int data) 
  { 
    super(959, data);
  } 
} 
