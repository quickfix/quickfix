package org.quickfix.field; 
import org.quickfix.IntField; 
import java.util.Date; 

public class CxlRejReason extends IntField 
{ 
public static final int TOO_LATE_TO_CANCEL = 0; 
public static final int UNKNOWN_ORDER = 1; 
public static final int BROKER_OPTION = 2; 
public static final int ALREADY_PENDING = 3; 

  public CxlRejReason() 
  { 
    super(102);
  } 
  public CxlRejReason(int data) 
  { 
    super(102, data);
  } 
} 
