package org.quickfix.field; 
import org.quickfix.StringField; 
import java.util.Date; 

public class AllocID extends StringField 
{ 
  public static final int FIELD = 70; 

  public AllocID() 
  { 
    super(70);
  } 
  public AllocID(String data) 
  { 
    super(70, data);
  } 
} 
