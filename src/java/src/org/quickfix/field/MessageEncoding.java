package org.quickfix.field; 
import org.quickfix.StringField; 
import java.util.Date; 

public class MessageEncoding extends StringField 
{ 
  public static final int FIELD = 347; 

  public MessageEncoding() 
  { 
    super(347);
  } 
  public MessageEncoding(String data) 
  { 
    super(347, data);
  } 
} 
