package org.quickfix.field; 
import org.quickfix.IntField; 
import java.util.Date; 

public class YieldRedemptionPriceType extends IntField 
{ 
  public static final int FIELD = 698; 
public static final int PCT = 1; 
public static final int CPS = 2; 
public static final int ABS = 3; 
public static final int DISCOUNT = 4; 
public static final int PREMIUM = 5; 
public static final int BPS_BENCHMARK = 6; 
public static final int TEDPRICE = 7; 
public static final int TEDYIELD = 8; 
public static final int YIELD = 9; 
public static final int FIXED_CABINET_TRADE_PRICE = 10; 
public static final int VARIABLE_CABINET_TRADE_PRICE = 11; 

  public YieldRedemptionPriceType() 
  { 
    super(698);
  } 
  public YieldRedemptionPriceType(int data) 
  { 
    super(698, data);
  } 
} 
