package org.quickfix.field; 
import org.quickfix.IntField; 
import java.util.Date; 

public class LiquidityIndType extends IntField 
{ 
  public static final int FIELD = 409; 
public static final int FIVEDAY_MOVING_AVERAGE = 1; 
public static final int TWENTYDAY_MOVING_AVERAGE = 2; 
public static final int NORMAL_MARKET_SIZE = 3; 
public static final int OTHER = 4; 

  public LiquidityIndType() 
  { 
    super(409);
  } 
  public LiquidityIndType(int data) 
  { 
    super(409, data);
  } 
} 
