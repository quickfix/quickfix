package org.quickfix.field; 
import org.quickfix.StringField; 
import java.util.Date; 

public class IOIid extends StringField 
{ 

  public IOIid() 
  { 
    super(23);
  } 
  public IOIid(String data) 
  { 
    super(23, data);
  } 
} 
