package org.quickfix.field; 
import org.quickfix.IntField; 
import java.util.Date; 

public class RegistRejReasonCode extends IntField 
{ 
  public static final int FIELD = 507; 

  public RegistRejReasonCode() 
  { 
    super(507);
  } 
  public RegistRejReasonCode(int data) 
  { 
    super(507, data);
  } 
} 
