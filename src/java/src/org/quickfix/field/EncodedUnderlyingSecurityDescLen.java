package org.quickfix.field; 
import org.quickfix.IntField; 
import java.util.Date; 

public class EncodedUnderlyingSecurityDescLen extends IntField 
{ 
  public static final int FIELD = 364; 

  public EncodedUnderlyingSecurityDescLen() 
  { 
    super(364);
  } 
  public EncodedUnderlyingSecurityDescLen(int data) 
  { 
    super(364, data);
  } 
} 
