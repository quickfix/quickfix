package org.quickfix.field; 
import org.quickfix.IntField; 
import java.util.Date; 

public class NoUnderlyingSecurityAltID extends IntField 
{ 

  public NoUnderlyingSecurityAltID() 
  { 
    super(457);
  } 
  public NoUnderlyingSecurityAltID(int data) 
  { 
    super(457, data);
  } 
} 
