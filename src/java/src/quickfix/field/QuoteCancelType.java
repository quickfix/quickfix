package org.quickfix.field; 
import org.quickfix.IntField; 
import java.util.Date; 

public class QuoteCancelType extends IntField 
{ 
  public static final int FIELD = 298; 
public static final int CANCEL_FOR_SYMBOL = 1; 
public static final int CANCEL_FOR_SECURITY_TYPE = 2; 
public static final int CANCEL_FOR_UNDERLYING_SYMBOL = 3; 
public static final int CANCEL_ALL_QUOTES = 4; 

  public QuoteCancelType() 
  { 
    super(298);
  } 
  public QuoteCancelType(int data) 
  { 
    super(298, data);
  } 
} 
