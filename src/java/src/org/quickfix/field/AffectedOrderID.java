package org.quickfix.field; 
import org.quickfix.StringField; 
import java.util.Date; 

public class AffectedOrderID extends StringField 
{ 

  public AffectedOrderID() 
  { 
    super(535);
  } 
  public AffectedOrderID(String data) 
  { 
    super(535, data);
  } 
} 
