package org.quickfix.field; 
import org.quickfix.IntField; 
import java.util.Date; 

public class EncodedSecurityDescLen extends IntField 
{ 
  public static final int FIELD = 350; 

  public EncodedSecurityDescLen() 
  { 
    super(350);
  } 
  public EncodedSecurityDescLen(int data) 
  { 
    super(350, data);
  } 
} 
