package org.quickfix.field; 
import org.quickfix.IntField; 
import java.util.Date; 

public class TrdRegTimestampType extends IntField 
{ 
  public static final int FIELD = 770; 
public static final int EXECUTION_TIME = 1; 
public static final int TIME_IN = 2; 
public static final int TIME_OUT = 3; 
public static final int BROKER_RECEIPT = 4; 
public static final int BROKER_EXECUTION = 5; 

  public TrdRegTimestampType() 
  { 
    super(770);
  } 
  public TrdRegTimestampType(int data) 
  { 
    super(770, data);
  } 
} 
