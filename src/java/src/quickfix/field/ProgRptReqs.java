package org.quickfix.field; 
import org.quickfix.IntField; 
import java.util.Date; 

public class ProgRptReqs extends IntField 
{ 
  public static final int FIELD = 414; 
public static final int BUYSIDE_EXPLICITLY_REQUESTS_STATUS_USING_STATUSREQUEST = 1; 
public static final int SELLSIDE_PERIODICALLY_SENDS_STATUS_USING_LISTSTATUS = 2; 
public static final int REAL_TIME_EXECUTION_REPORTS = 3; 

  public ProgRptReqs() 
  { 
    super(414);
  } 
  public ProgRptReqs(int data) 
  { 
    super(414, data);
  } 
} 
