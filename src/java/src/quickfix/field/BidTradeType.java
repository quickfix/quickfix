package org.quickfix.field; 
import org.quickfix.CharField; 
import java.util.Date; 

public class BidTradeType extends CharField 
{ 
  public static final int FIELD = 418; 
public static final char RISK_TRADE = 'R'; 
public static final char VWAP_GUARANTEE = 'G'; 
public static final char AGENCY = 'A'; 
public static final char GUARANTEED_CLOSE = 'J'; 

  public BidTradeType() 
  { 
    super(418);
  } 
  public BidTradeType(char data) 
  { 
    super(418, data);
  } 
} 
