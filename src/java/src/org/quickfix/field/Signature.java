package org.quickfix.field; 
import org.quickfix.StringField; 
import java.util.Date; 

public class Signature extends StringField 
{ 

  public Signature() 
  { 
    super(89);
  } 
  public Signature(String data) 
  { 
    super(89, data);
  } 
} 
