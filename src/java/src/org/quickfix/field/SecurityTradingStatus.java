package org.quickfix.field; 
import org.quickfix.IntField; 
import java.util.Date; 

public class SecurityTradingStatus extends IntField 
{ 
  public static final int FIELD = 326; 
public static final int OPENING_DELAY = 1; 
public static final int TRADING_HALT = 2; 
public static final int RESUME = 3; 
public static final int NO_OPEN = 4; 
public static final int PRICE_INDICATION = 5; 
public static final int TRADING_RANGE_INDICATION = 6; 
public static final int MARKET_IMBALANCE_BUY = 7; 
public static final int MARKET_IMBALANCE_SELL = 8; 
public static final int MARKET_ON_CLOSE_IMBALANCE_BUY = 9; 
public static final int MARKET_ON_CLOSE_IMBALANCE_SELL = 10; 
public static final int NO_MARKET_IMBALANCE = 12; 
public static final int NO_MARKET_ON_CLOSE_IMBALANCE = 13; 
public static final int ITS_PRE_OPENING = 14; 
public static final int NEW_PRICE_INDICATION = 15; 
public static final int TRADE_DISSEMINATION_TIME = 16; 
public static final int READY_TO_TRADE = 17; 
public static final int NOT_AVAILABLE_FOR_TRADING = 18; 
public static final int NOT_TRADED_ON_THIS_MARKET = 19; 
public static final int UNKNOWN_OR_INVALID = 20; 
public static final int PRE_OPEN = 21; 
public static final int OPENING_ROTATION = 22; 
public static final int FAST_MARKET = 23; 

  public SecurityTradingStatus() 
  { 
    super(326);
  } 
  public SecurityTradingStatus(int data) 
  { 
    super(326, data);
  } 
} 
