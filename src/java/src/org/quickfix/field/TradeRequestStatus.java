package org.quickfix.field; 
import org.quickfix.IntField; 
import java.util.Date; 

public class TradeRequestStatus extends IntField 
{ 
  public static final int FIELD = 750; 
public static final int ACCEPTED = 0; 
public static final int COMPLETED = 1; 
public static final int REJECTED = 2; 

  public TradeRequestStatus() 
  { 
    super(750);
  } 
  public TradeRequestStatus(int data) 
  { 
    super(750, data);
  } 
} 
