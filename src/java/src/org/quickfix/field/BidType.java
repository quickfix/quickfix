package org.quickfix.field; 
import org.quickfix.IntField; 
import java.util.Date; 

public class BidType extends IntField 
{ 
public static final int NON_DISCLOSED_STYLE = 1; 
public static final int DISCLOSED_STYLE = 2; 
public static final int NO_BIDDING_PROCESS = 3; 

  public BidType() 
  { 
    super(394);
  } 
  public BidType(int data) 
  { 
    super(394, data);
  } 
} 
