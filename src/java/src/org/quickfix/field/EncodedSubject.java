package org.quickfix.field; 
import org.quickfix.StringField; 
import java.util.Date; 

public class EncodedSubject extends StringField 
{ 

  public EncodedSubject() 
  { 
    super(357);
  } 
  public EncodedSubject(String data) 
  { 
    super(357, data);
  } 
} 
