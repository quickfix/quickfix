package org.quickfix.field; 
import org.quickfix.StringField; 
import java.util.Date; 

public class SettlType extends StringField 
{ 
  public static final int FIELD = 63; 
public static final char REGULAR = '0'; 
public static final char CASH = '1'; 
public static final char NEXT_DAY = '2'; 
public static final char T_PLUS_2 = '3'; 
public static final char T_PLUS_3 = '4'; 
public static final char T_PLUS_4 = '5'; 
public static final char FUTURE = '6'; 
public static final char WHEN_AND_IF_ISSUED = '7'; 
public static final char SELLERS_OPTION = '8'; 
public static final char T_PLUS_5 = '9'; 

  public SettlType() 
  { 
    super(63);
  } 
  public SettlType(String data) 
  { 
    super(63, data);
  } 
} 
