package org.quickfix.field; 
import org.quickfix.IntField; 
import java.util.Date; 

public class LastLiquidityInd extends IntField 
{ 
  public static final int FIELD = 851; 
public static final int ADDED_LIQUIDITY = 1; 
public static final int REMOVED_LIQUIDITY = 2; 
public static final int LIQUIDITY_ROUTED_OUT = 3; 

  public LastLiquidityInd() 
  { 
    super(851);
  } 
  public LastLiquidityInd(int data) 
  { 
    super(851, data);
  } 
} 
