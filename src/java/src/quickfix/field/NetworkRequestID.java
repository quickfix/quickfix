package org.quickfix.field; 
import org.quickfix.StringField; 
import java.util.Date; 

public class NetworkRequestID extends StringField 
{ 
  public static final int FIELD = 933; 

  public NetworkRequestID() 
  { 
    super(933);
  } 
  public NetworkRequestID(String data) 
  { 
    super(933, data);
  } 
} 
