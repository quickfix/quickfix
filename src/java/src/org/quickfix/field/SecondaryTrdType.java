package org.quickfix.field; 
import org.quickfix.IntField; 
import java.util.Date; 

public class SecondaryTrdType extends IntField 
{ 
  public static final int FIELD = 855; 
public static final int REGULAR_TRADE = 0; 
public static final int BLOCK_TRADE = 1; 
public static final int EFP = 2; 
public static final int TRANSFER = 3; 
public static final int LATE_TRADE = 4; 
public static final int TTRADE = 5; 
public static final int WEIGHTED_AVERAGE_PRICE_TRADE = 6; 
public static final int BUNCHED_TRADE = 7; 
public static final int LATE_BUNCHED_TRADE = 8; 
public static final int PRIOR_REFERENCE_PRICE_TRADE = 9; 
public static final int AFTER_HOURS_TRADE = 10; 

  public SecondaryTrdType() 
  { 
    super(855);
  } 
  public SecondaryTrdType(int data) 
  { 
    super(855, data);
  } 
} 
