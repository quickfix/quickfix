package org.quickfix.field; 
import org.quickfix.IntField; 
import java.util.Date; 

public class TargetStrategy extends IntField 
{ 
  public static final int FIELD = 847; 
public static final int VWAP = 1; 
public static final int PARTICIPATE = 2; 
public static final int MININIZE_MARKET_IMPACT = 3; 
public static final int RESERVED_AND_AVAILABLE_FOR_BILATERALLY_AGREED_UPON_USER_DEFINED_VALUES = 1000; 

  public TargetStrategy() 
  { 
    super(847);
  } 
  public TargetStrategy(int data) 
  { 
    super(847, data);
  } 
} 
