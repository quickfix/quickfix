package org.quickfix.field; 
import org.quickfix.IntField; 
import java.util.Date; 

public class ExecRestatementReason extends IntField 
{ 
public static final int GT_CORPORATE_ACTION = 0; 
public static final int GT_RENEWAL_RESTATEMENT = 1; 
public static final int VERBAL_CHANGE = 2; 
public static final int REPRICING_OF_ORDER = 3; 
public static final int BROKER_OPTION = 4; 
public static final int PARTIAL_DECLINE_OF_ORDERQTY = 5; 

  public ExecRestatementReason() 
  { 
    super(378);
  } 
  public ExecRestatementReason(int data) 
  { 
    super(378, data);
  } 
} 
