package org.quickfix.field; 
import org.quickfix.StringField; 
import java.util.Date; 

public class ContraBroker extends StringField 
{ 

  public ContraBroker() 
  { 
    super(375);
  } 
  public ContraBroker(String data) 
  { 
    super(375, data);
  } 
} 
