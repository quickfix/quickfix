package org.quickfix.field; 
import org.quickfix.StringField; 
import java.util.Date; 

public class RefCompID extends StringField 
{ 
  public static final int FIELD = 930; 

  public RefCompID() 
  { 
    super(930);
  } 
  public RefCompID(String data) 
  { 
    super(930, data);
  } 
} 
