package org.quickfix.field; 
import org.quickfix.IntField; 
import java.util.Date; 

public class SecurityTradingStatus extends IntField 
{ 
  public static final int FIELD = 326; 
public static final int OPENING_DELAY = 1; 
public static final int TRADING_HALT = 2; 
public static final int RESUME = 3; 
public static final int NO_OPEN_NO_RESUME = 4; 
public static final int PRICE_INDICATION = 5; 
public static final int TRADING_RANGE_INDICATION = 6; 
public static final int MARKET_IMBALANCE_BUY = 7; 
public static final int MARKET_IMBALANCE_SELL = 8; 
public static final int MARKET_ON_CLOSE_IMBALANCE_BUY = 9; 

  public SecurityTradingStatus() 
  { 
    super(326);
  } 
  public SecurityTradingStatus(int data) 
  { 
    super(326, data);
  } 
} 
