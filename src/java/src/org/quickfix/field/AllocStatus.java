package org.quickfix.field; 
import org.quickfix.IntField; 
import java.util.Date; 

public class AllocStatus extends IntField 
{ 
  public static final int FIELD = 87; 
public static final int ACCEPTED_SUCCESSFULLY_PROCESSED = 0; 
public static final int BLOCK_LEVEL_REJECT = 1; 
public static final int ACCOUNT_LEVEL_REJECT = 2; 
public static final int RECEIVED_RECEIVED_NOT_YET_PROCESSED = 3; 
public static final int INCOMPLETE = 4; 
public static final int REJECTED_BY_INTERMEDIARY = 5; 

  public AllocStatus() 
  { 
    super(87);
  } 
  public AllocStatus(int data) 
  { 
    super(87, data);
  } 
} 
