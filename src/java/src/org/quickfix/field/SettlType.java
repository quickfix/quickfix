package org.quickfix.field; 
import org.quickfix.CharField; 
import java.util.Date; 

public class SettlType extends CharField 
{ 
  public static final int FIELD = 63; 
public static final char REGULAR = '0'; 
public static final char CASH = '1'; 
public static final char NEXT_DAY = '2'; 
public static final char T2 = '3'; 
public static final char T3 = '4'; 
public static final char T4 = '5'; 
public static final char FUTURE = '6'; 
public static final char WHEN_ISSUED = '7'; 
public static final char T5 = '8'; 
public static final char T1 = '9'; 

  public SettlType() 
  { 
    super(63);
  } 
  public SettlType(char data) 
  { 
    super(63, data);
  } 
} 
