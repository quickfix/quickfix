package org.quickfix.field; 
import org.quickfix.IntField; 
import java.util.Date; 

public class SecurityResponseType extends IntField 
{ 
  public static final int FIELD = 323; 
public static final int ACCPT_SEC_PROP = 1; 
public static final int ACCPT_SEC_PROP_REV = 2; 
public static final int SEC_LIST_TYPES_RET = 3; 
public static final int SEC_LIST_RET = 4; 
public static final int REJ_SEC_PROP = 5; 
public static final int NO_MATCH = 6; 

  public SecurityResponseType() 
  { 
    super(323);
  } 
  public SecurityResponseType(int data) 
  { 
    super(323, data);
  } 
} 
