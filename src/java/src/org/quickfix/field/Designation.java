package org.quickfix.field; 
import org.quickfix.StringField; 
import java.util.Date; 

public class Designation extends StringField 
{ 
  public static final int FIELD = 494; 

  public Designation() 
  { 
    super(494);
  } 
  public Designation(String data) 
  { 
    super(494, data);
  } 
} 
