package org.quickfix.field; 
import org.quickfix.IntField; 
import java.util.Date; 

public class EncodedLegSecurityDescLen extends IntField 
{ 

  public EncodedLegSecurityDescLen() 
  { 
    super(621);
  } 
  public EncodedLegSecurityDescLen(int data) 
  { 
    super(621, data);
  } 
} 
