package org.quickfix.field; 
import org.quickfix.IntField; 
import java.util.Date; 

public class SecurityRequestResult extends IntField 
{ 
  public static final int FIELD = 560; 
public static final int VALID_REQ = 0; 
public static final int INVALID_REQ = 1; 
public static final int NO_INSTRUMENTS_FOUND = 2; 
public static final int NOT_AUTHORIZED = 3; 
public static final int INSTRUMENT_UNAVAILABLE = 4; 
public static final int NOT_SUPPORTED = 5; 

  public SecurityRequestResult() 
  { 
    super(560);
  } 
  public SecurityRequestResult(int data) 
  { 
    super(560, data);
  } 
} 
