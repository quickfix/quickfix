package org.quickfix.field; 
import org.quickfix.StringField; 
import java.util.Date; 

public class SendingDate extends StringField 
{ 
  public static final int FIELD = 51; 

  public SendingDate() 
  { 
    super(51);
  } 
  public SendingDate(String data) 
  { 
    super(51, data);
  } 
} 
