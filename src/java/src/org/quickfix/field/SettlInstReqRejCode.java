package org.quickfix.field; 
import org.quickfix.IntField; 
import java.util.Date; 

public class SettlInstReqRejCode extends IntField 
{ 
  public static final int FIELD = 792; 
public static final int UNABLE_TO_PROCESS_REQUEST = 0; 
public static final int UNKNOWN_ACCOUNT = 1; 
public static final int NO_MATCHING_SETTLEMENT_INSTRUCTIONS_FOUND = 2; 
public static final int OTHER = 99; 

  public SettlInstReqRejCode() 
  { 
    super(792);
  } 
  public SettlInstReqRejCode(int data) 
  { 
    super(792, data);
  } 
} 
