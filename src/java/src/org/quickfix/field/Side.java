package org.quickfix.field; 
import org.quickfix.CharField; 
import java.util.Date; 

public class Side extends CharField 
{ 
public static final char BUY = '1'; 
public static final char SELL = '2'; 
public static final char BUY_MINUS = '3'; 
public static final char SELL_PLUS = '4'; 
public static final char SELL_SHORT = '5'; 
public static final char SELL_SHORT_EXEMPT = '6'; 
public static final char D = '7'; 
public static final char CROSS = '8'; 
public static final char CROSS_SHORT = '9'; 

  public Side() 
  { 
    super(54);
  } 
  public Side(char data) 
  { 
    super(54, data);
  } 
} 
