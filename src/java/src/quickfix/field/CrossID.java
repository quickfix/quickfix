package org.quickfix.field; 
import org.quickfix.StringField; 
import java.util.Date; 

public class CrossID extends StringField 
{ 
  public static final int FIELD = 548; 

  public CrossID() 
  { 
    super(548);
  } 
  public CrossID(String data) 
  { 
    super(548, data);
  } 
} 
