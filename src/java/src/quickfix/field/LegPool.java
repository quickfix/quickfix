package org.quickfix.field; 
import org.quickfix.StringField; 
import java.util.Date; 

public class LegPool extends StringField 
{ 
  public static final int FIELD = 740; 

  public LegPool() 
  { 
    super(740);
  } 
  public LegPool(String data) 
  { 
    super(740, data);
  } 
} 
