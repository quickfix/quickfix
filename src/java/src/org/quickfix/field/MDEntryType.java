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
public static final char OPENING = '4'; 
public static final char CLOSING = '5'; 
public static final char SETTLEMENT = '6'; 
public static final char TRADING_HIGH = '7'; 
public static final char TRADING_LOW = '8'; 
public static final char TRADING_VWAP = '9'; 
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
