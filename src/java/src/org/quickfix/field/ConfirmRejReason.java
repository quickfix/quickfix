package org.quickfix.field; 
import org.quickfix.IntField; 
import java.util.Date; 

public class ConfirmRejReason extends IntField 
{ 
  public static final int FIELD = 774; 
public static final int MISMATCHED_ACCOUNT = 1; 
public static final int MISSING_SETTLEMENT_INSTRUCTIONS = 2; 
public static final int OTHER = 99; 

  public ConfirmRejReason() 
  { 
    super(774);
  } 
  public ConfirmRejReason(int data) 
  { 
    super(774, data);
  } 
} 
