package org.quickfix.field; 
import org.quickfix.IntField; 
import java.util.Date; 

public class CrossPrioritization extends IntField 
{ 
  public static final int FIELD = 550; 
public static final int NONE = 0; 
public static final int BUY_SIDE_IS_PRIORITIZED = 1; 
public static final int SELL_SIDE_IS_PRIORITIZED = 2; 

  public CrossPrioritization() 
  { 
    super(550);
  } 
  public CrossPrioritization(int data) 
  { 
    super(550, data);
  } 
} 
