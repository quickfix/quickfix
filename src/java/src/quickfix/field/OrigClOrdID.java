package org.quickfix.field; 
import org.quickfix.StringField; 
import java.util.Date; 

public class OrigClOrdID extends StringField 
{ 
  public static final int FIELD = 41; 

  public OrigClOrdID() 
  { 
    super(41);
  } 
  public OrigClOrdID(String data) 
  { 
    super(41, data);
  } 
} 
