package org.quickfix.field; 
import org.quickfix.StringField; 
import java.util.Date; 

public class TimeBracket extends StringField 
{ 
  public static final int FIELD = 943; 

  public TimeBracket() 
  { 
    super(943);
  } 
  public TimeBracket(String data) 
  { 
    super(943, data);
  } 
} 
