package org.quickfix.field; 
import org.quickfix.IntField; 
import java.util.Date; 

public class DiscretionOffsetType extends IntField 
{ 
  public static final int FIELD = 842; 
public static final int PRICE = 0; 
public static final int BASIS_POINTS = 1; 
public static final int TICKS = 2; 
public static final int PRICE_TIER_LEVEL = 3; 

  public DiscretionOffsetType() 
  { 
    super(842);
  } 
  public DiscretionOffsetType(int data) 
  { 
    super(842, data);
  } 
} 
