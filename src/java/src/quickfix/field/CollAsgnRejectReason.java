package org.quickfix.field; 
import org.quickfix.IntField; 
import java.util.Date; 

public class CollAsgnRejectReason extends IntField 
{ 
  public static final int FIELD = 906; 
public static final int UNKNOWN_DEAL = 0; 
public static final int UNKNOWN_OR_INVALID_INSTRUMENT = 1; 
public static final int UNAUTHORIZED_TRANSACTION = 2; 
public static final int INSUFFICIENT_COLLATERAL = 3; 
public static final int INVALID_TYPE_OF_COLLATERAL = 4; 
public static final int EXCESSIVE_SUBSTITUTION = 5; 

  public CollAsgnRejectReason() 
  { 
    super(906);
  } 
  public CollAsgnRejectReason(int data) 
  { 
    super(906, data);
  } 
} 
