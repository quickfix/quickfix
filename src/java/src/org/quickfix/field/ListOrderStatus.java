package org.quickfix.field; 
import org.quickfix.IntField; 
import java.util.Date; 

public class ListOrderStatus extends IntField 
{ 
  public static final int FIELD = 431; 
public static final int IN_BID_PROC = 1; 
public static final int RECV_FOR_EXEC = 2; 
public static final int EXEC = 3; 
public static final int CXL = 4; 
public static final int ALERT = 5; 
public static final int ALL_DONE = 6; 
public static final int REJ = 7; 

  public ListOrderStatus() 
  { 
    super(431);
  } 
  public ListOrderStatus(int data) 
  { 
    super(431, data);
  } 
} 
