package org.quickfix.field; 
import org.quickfix.IntField; 
import java.util.Date; 

public class SecurityListRequestType extends IntField 
{ 
public static final int SYMBOL = 0; 
public static final int SECURITYTYPE_AND = 1; 
public static final int PRODUCT = 2; 
public static final int TRADINGSESSIONID = 3; 
public static final int ALL_SECURITIES = 4; 

  public SecurityListRequestType() 
  { 
    super(559);
  } 
  public SecurityListRequestType(int data) 
  { 
    super(559, data);
  } 
} 
