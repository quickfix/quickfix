package org.quickfix.field; 
import org.quickfix.CharField; 
import java.util.Date; 

public class MDEntryType extends CharField 
{ 
  public static final int FIELD = 269; 
public static final char BID = '0'; 
public static final char OFFER = '1'; 
public static final char TRADE = '2'; 
public static final char INDEX_VALUE = '3'; 
public static final char OPENING_PRICE = '4'; 
public static final char CLOSING_PRICE = '5'; 
public static final char SETTLEMENT_PRICE = '6'; 
public static final char TRADING_SESSION_HIGH_PRICE = '7'; 
public static final char TRADING_SESSION_LOW_PRICE = '8'; 
public static final char TRADING_SESSION_VWAP_PRICE = '9'; 
public static final char IMBALANCE = 'A'; 
public static final char TRADE_VOLUME = 'B'; 
public static final char OPEN_INTEREST = 'C'; 

  public MDEntryType() 
  { 
    super(269);
  } 
  public MDEntryType(char data) 
  { 
    super(269, data);
  } 
} 
