package org.quickfix.field; 
import org.quickfix.IntField; 
import java.util.Date; 

public class PriceType extends IntField 
{ 
public static final int PERCENTAGE = 1; 
public static final int PER_SHARE = 2; 
public static final int FIXED_AMOUNT = 3; 
public static final int DISCOUNT = 4; 
public static final int PREMIUM = 5; 
public static final int BASIS_POINTS_RELATIVE_TO_BENCHMARK = 6; 
public static final int TED_PRICE = 7; 
public static final int TED_YIELD = 8; 

  public PriceType() 
  { 
    super(423);
  } 
  public PriceType(int data) 
  { 
    super(423, data);
  } 
} 
