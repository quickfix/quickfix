package org.quickfix.field; 
import org.quickfix.IntField; 
import java.util.Date; 

public class SecurityRequestType extends IntField 
{ 
  public static final int FIELD = 321; 
public static final int REQ_SEC_ID = 0; 
public static final int REQ_SEC_IDPROV = 1; 
public static final int REQ_SEC_LIST_TYPES = 2; 
public static final int REQ_SEC_LIST = 3; 

  public SecurityRequestType() 
  { 
    super(321);
  } 
  public SecurityRequestType(int data) 
  { 
    super(321, data);
  } 
} 
