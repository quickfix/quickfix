package org.quickfix.field; 
import org.quickfix.StringField; 
import java.util.Date; 

public class UserRequestID extends StringField 
{ 
  public static final int FIELD = 923; 

  public UserRequestID() 
  { 
    super(923);
  } 
  public UserRequestID(String data) 
  { 
    super(923, data);
  } 
} 
