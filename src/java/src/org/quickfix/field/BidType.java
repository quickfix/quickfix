package org.quickfix.field; 
import org.quickfix.IntField; 
import java.util.Date; 

public class BidType extends IntField 
{ 
  public static final int FIELD = 394; 
public static final int NON_DISC = 1; 
public static final int DISC = 2; 
public static final int NO_BID = 3; 

  public BidType() 
  { 
    super(394);
  } 
  public BidType(int data) 
  { 
    super(394, data);
  } 
} 
