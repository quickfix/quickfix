package org.quickfix.field; 
import org.quickfix.StringField; 
import java.util.Date; 

public class OrderRestrictions extends StringField 
{ 
  public static final int FIELD = 529; 
public static final char PROGRAM_TRADE = '1'; 
public static final char INDEX_ARBITRAGE = '2'; 
public static final char NON_INDEX_ARBITRAGE = '3'; 
public static final char COMPETING_MARKET_MAKER = '4'; 
public static final char ACT_MM = '5'; 
public static final char ACT_MMDERIV = '6'; 
public static final char FOR_ENTITY = '7'; 
public static final char EX_MRKT_PART = '8'; 
public static final char EX_INT_MRKT_LINK = '9'; 
public static final char RISK_ARB = 'A'; 

  public OrderRestrictions() 
  { 
    super(529);
  } 
  public OrderRestrictions(String data) 
  { 
    super(529, data);
  } 
} 
