package org.quickfix.field; 
import org.quickfix.IntField; 
import java.util.Date; 

public class QuoteCancelType extends IntField 
{ 
  public static final int FIELD = 298; 
public static final int CXL_SYM = 1; 
public static final int CXL_SEC_TYPE = 2; 
public static final int CXL_UNDER = 3; 
public static final int CXL_ALL = 4; 

  public QuoteCancelType() 
  { 
    super(298);
  } 
  public QuoteCancelType(int data) 
  { 
    super(298, data);
  } 
} 
