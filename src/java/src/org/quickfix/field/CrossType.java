package org.quickfix.field; 
import org.quickfix.IntField; 
import java.util.Date; 

public class CrossType extends IntField 
{ 
  public static final int FIELD = 549; 
public static final int CROSS_AON = 1; 
public static final int CROSS_IOC = 2; 
public static final int CROSS_ONE_SIDE = 3; 
public static final int CROSS_SAME_PRICE = 4; 

  public CrossType() 
  { 
    super(549);
  } 
  public CrossType(int data) 
  { 
    super(549, data);
  } 
} 
