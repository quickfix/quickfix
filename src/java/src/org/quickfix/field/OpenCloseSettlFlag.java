package org.quickfix.field; 
import org.quickfix.StringField; 
import java.util.Date; 

public class OpenCloseSettlFlag extends StringField 
{ 
  public static final int FIELD = 286; 
public static final char DAILY_OPEN = '0'; 
public static final char SESSION_OPEN = '1'; 
public static final char DELIVERY_SETTLEMENT = '2'; 
public static final char EXPECTED_ENTRY = '3'; 
public static final char ENTRY_FROM_PREV_BUSINESS_DAY = '4'; 
public static final char THEORETICAL_PRICE = '5'; 

  public OpenCloseSettlFlag() 
  { 
    super(286);
  } 
  public OpenCloseSettlFlag(String data) 
  { 
    super(286, data);
  } 
} 
