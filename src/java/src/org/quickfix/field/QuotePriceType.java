package org.quickfix.field; 
import org.quickfix.IntField; 
import java.util.Date; 

public class QuotePriceType extends IntField 
{ 
  public static final int FIELD = 692; 
public static final int PERCENT = 1; 
public static final int PER_SHARE = 2; 
public static final int FIXED_AMOUNT = 3; 
public static final int DISCOUNT = 4; 
public static final int PREMIUM = 5; 
public static final int BASIS_POINTS_RELATIVE_TO_BENCHMARK = 6; 
public static final int TEDPRICE = 7; 
public static final int TEDYIELD = 8; 
public static final int YIELD_SPREAD_SWAPS = 9; 
public static final int YIELD = 10; 

  public QuotePriceType() 
  { 
    super(692);
  } 
  public QuotePriceType(int data) 
  { 
    super(692, data);
  } 
} 
