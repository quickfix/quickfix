package org.quickfix.field; 
import org.quickfix.StringField; 
import java.util.Date; 

public class EmailThreadID extends StringField 
{ 
  public static final int FIELD = 164; 

  public EmailThreadID() 
  { 
    super(164);
  } 
  public EmailThreadID(String data) 
  { 
    super(164, data);
  } 
} 
