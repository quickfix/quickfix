package org.quickfix.field; 
import org.quickfix.StringField; 
import java.util.Date; 

public class CrossID extends StringField 
{ 

  public CrossID() 
  { 
    super(548);
  } 
  public CrossID(String data) 
  { 
    super(548, data);
  } 
} 
