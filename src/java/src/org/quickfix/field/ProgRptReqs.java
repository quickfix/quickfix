package org.quickfix.field; 
import org.quickfix.IntField; 
import java.util.Date; 

public class ProgRptReqs extends IntField 
{ 
  public static final int FIELD = 414; 
public static final int BUY_SIDE = 1; 
public static final int SELL_SIDE = 2; 
public static final int REAL_TIME = 3; 

  public ProgRptReqs() 
  { 
    super(414);
  } 
  public ProgRptReqs(int data) 
  { 
    super(414, data);
  } 
} 
