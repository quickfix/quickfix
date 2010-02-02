package quickfix.field; 
import quickfix.IntField; 
import java.util.Date; 

public class TrdType extends IntField 
{ 
  public static final int FIELD = 828; 
public static final int REGULAR_TRADE = 0; 
public static final int BLOCK_TRADE = 1; 
public static final int AFTER_HOURS_TRADE = 10; 
public static final int EFP = 2; 
public static final int TRANSFER = 3; 
public static final int LATE_TRADE = 4; 
public static final int T_TRADE = 5; 
public static final int WEIGHTED_AVERAGE_PRICE_TRADE = 6; 
public static final int BUNCHED_TRADE = 7; 
public static final int LATE_BUNCHED_TRADE = 8; 
public static final int PRIOR_REFERENCE_PRICE_TRADE = 9; 
public static final int EXCHANGE_FOR_RISK = 11; 
public static final int EXCHANGE_FOR_SWAP = 12; 
public static final int EXCHANGE_OF_FUTURES_FOR = 13; 
public static final int EXCHANGE_OF_OPTIONS_FOR_OPTIONS = 14; 
public static final int TRADING_AT_SETTLEMENT = 15; 
public static final int ALL_OR_NONE = 16; 
public static final int FUTURES_LARGE_ORDER_EXECUTION = 17; 
public static final int EXCHANGE_OF_FUTURES_FOR_FUTURES = 18; 
public static final int OPTION_INTERIM_TRADE = 19; 
public static final int OPTION_CABINET_TRADE = 20; 
public static final int PRIVATELY_NEGOTIATED_TRADES = 22; 
public static final int SUBSTITUTION_OF_FUTURES_FOR_FORWARDS = 23; 
public static final int ERROR_TRADE = 24; 
public static final int SPECIAL_CUM_DIVIDEND = 25; 
public static final int SPECIAL_EX_DIVIDEND = 26; 
public static final int SPECIAL_CUM_COUPON = 27; 
public static final int SPECIAL_EX_COUPON = 28; 
public static final int CASH_SETTLEMENT = 29; 
public static final int SPECIAL_PRICE = 30; 
public static final int GUARANTEED_DELIVERY = 31; 
public static final int SPECIAL_CUM_RIGHTS = 32; 
public static final int SPECIAL_EX_RIGHTS = 33; 
public static final int SPECIAL_CUM_CAPITAL_REPAYMENTS = 34; 
public static final int SPECIAL_EX_CAPITAL_REPAYMENTS = 35; 
public static final int SPECIAL_CUM_BONUS = 36; 
public static final int SPECIAL_EX_BONUS = 37; 
public static final int BLOCK_TRADE2 = 38; 
public static final int WORKED_PRINCIPAL_TRADE = 39; 
public static final int BLOCK_TRADES = 40; 
public static final int NAME_CHANGE = 41; 
public static final int PORTFOLIO_TRANSFER = 42; 
public static final int PROROGATION_BUY = 43; 
public static final int PROROGATION_SELL = 44; 
public static final int OPTION_EXERCISE = 45; 
public static final int DELTA_NEUTRAL_TRANSACTION = 46; 
public static final int FINANCING_TRANSACTION = 47; 

  public TrdType() 
  { 
    super(828);
  } 
  public TrdType(int data) 
  { 
    super(828, data);
  } 
} 
