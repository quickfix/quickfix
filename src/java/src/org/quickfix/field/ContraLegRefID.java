package org.quickfix.field; 
import org.quickfix.StringField; 
import java.util.Date; 

public class ContraLegRefID extends StringField 
{ 

  public ContraLegRefID() 
  { 
    super(655);
  } 
  public ContraLegRefID(String data) 
  { 
    super(655, data);
  } 
} 
