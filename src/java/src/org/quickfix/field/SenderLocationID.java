package org.quickfix.field; 
import org.quickfix.StringField; 
import java.util.Date; 

public class SenderLocationID extends StringField 
{ 

  public SenderLocationID() 
  { 
    super(142);
  } 
  public SenderLocationID(String data) 
  { 
    super(142, data);
  } 
} 
