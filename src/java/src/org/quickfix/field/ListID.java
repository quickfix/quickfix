package org.quickfix.field; 
import org.quickfix.StringField; 
import java.util.Date; 

public class ListID extends StringField 
{ 

  public ListID() 
  { 
    super(66);
  } 
  public ListID(String data) 
  { 
    super(66, data);
  } 
} 
