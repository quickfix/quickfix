package org.quickfix.field; 
import org.quickfix.StringField; 
import java.util.Date; 

public class ClOrdID extends StringField 
{ 

  public ClOrdID() 
  { 
    super(11);
  } 
  public ClOrdID(String data) 
  { 
    super(11, data);
  } 
} 
