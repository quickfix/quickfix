package org.quickfix.field; 
import org.quickfix.IntField; 
import java.util.Date; 

public class ListOrderStatus extends IntField 
{ 
  public static final int FIELD = 431; 
public static final int INBIDDINGPROCESS = 1; 
public static final int RECEIVEDFOREXECUTION = 2; 
public static final int EXECUTING = 3; 
public static final int CANCELING = 4; 
public static final int ALERT = 5; 
public static final int ALL_DONE = 6; 
public static final int REJECT = 7; 

  public ListOrderStatus() 
  { 
    super(431);
  } 
  public ListOrderStatus(int data) 
  { 
    super(431, data);
  } 
} 
