package org.quickfix.field; 
import org.quickfix.CharField; 
import java.util.Date; 

public class LegSide extends CharField 
{ 
  public static final int FIELD = 624; 
public static final char BUY = '1'; 
public static final char SELL = '2'; 
public static final char BUY_MIN = '3'; 
public static final char SELL_PLUS = '4'; 
public static final char SELL_SHT = '5'; 
public static final char SELL_SHT_EX = '6'; 
public static final char UNDISC = '7'; 
public static final char CROSS = '8'; 
public static final char CROSS_SHORT = '9'; 
public static final char CROSS_SHORT_EX = 'A'; 
public static final char AS_DEFINED = 'B'; 
public static final char OPPOSITE = 'C'; 
public static final char SUBSCRIBE = 'D'; 
public static final char REDEEM = 'E'; 
public static final char LEND_FINANCING = 'F'; 
public static final char BORROW_FINANCING = 'G'; 

  public LegSide() 
  { 
    super(624);
  } 
  public LegSide(char data) 
  { 
    super(624, data);
  } 
} 
