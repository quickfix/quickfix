package org.quickfix.field; 
import org.quickfix.StringField; 
import java.util.Date; 

public class OpenCloseSettlFlag extends StringField 
{ 
  public static final int FIELD = 286; 
public static final char DAILY_OPEN_CLOSE_SETTLEMENT_ENTRY = '0'; 
public static final char SESSION_OPEN_CLOSE_SETTLEMENT_ENTRY = '1'; 
public static final char DELIVERY_SETTLEMENT_ENTRY = '2'; 
public static final char EXPECTED_ENTRY = '3'; 
public static final char ENTRY_FROM_PREVIOUS_BUSINESS_DAY = '4'; 
public static final char THEORETICAL_PRICE_VALUE = '5'; 

  public OpenCloseSettlFlag() 
  { 
    super(286);
  } 
  public OpenCloseSettlFlag(String data) 
  { 
    super(286, data);
  } 
} 
