package org.quickfix.field; 
import org.quickfix.StringField; 
import java.util.Date; 

public class RawData extends StringField 
{ 

  public RawData() 
  { 
    super(96);
  } 
  public RawData(String data) 
  { 
    super(96, data);
  } 
} 
