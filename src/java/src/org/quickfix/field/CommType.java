package org.quickfix.field; 
import org.quickfix.CharField; 
import java.util.Date; 

public class CommType extends CharField 
{ 
  public static final int FIELD = 13; 
public static final char PER_SHARE = '1'; 
public static final char PERCENT = '2'; 
public static final char ABSOLUTE = '3'; 
public static final char PCT_WAIVED_CSH_DISC = '4'; 
public static final char PCT_WAIVED_EN_UNITS = '5'; 
public static final char PER_BOND = '6'; 

  public CommType() 
  { 
    super(13);
  } 
  public CommType(char data) 
  { 
    super(13, data);
  } 
} 
