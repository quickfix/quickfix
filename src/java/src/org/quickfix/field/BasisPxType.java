package org.quickfix.field; 
import org.quickfix.CharField; 
import java.util.Date; 

public class BasisPxType extends CharField 
{ 
  public static final int FIELD = 419; 
public static final char CLS_PX_MORN = '2'; 
public static final char CLS_PX = '3'; 
public static final char CURR_PX = '4'; 
public static final char SQ = '5'; 
public static final char VWAPDAY = '6'; 
public static final char VWAPMORN = '7'; 
public static final char VWAPAFT = '8'; 
public static final char VWAPDAY_XYORI = '9'; 
public static final char VWAPMORN_XYORI = 'A'; 
public static final char VWAPAFT_XYORI = 'B'; 
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
