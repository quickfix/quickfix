package org.quickfix.field; 
import org.quickfix.StringField; 
import java.util.Date; 

public class ContraLegRefID extends StringField 
{ 
  public static final int FIELD = 655; 

  public ContraLegRefID() 
  { 
    super(655);
  } 
  public ContraLegRefID(String data) 
  { 
    super(655, data);
  } 
} 
