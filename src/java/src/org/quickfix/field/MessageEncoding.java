package org.quickfix.field; 
import org.quickfix.StringField; 
import java.util.Date; 

public class MessageEncoding extends StringField 
{ 

  public MessageEncoding() 
  { 
    super(347);
  } 
  public MessageEncoding(String data) 
  { 
    super(347, data);
  } 
} 
