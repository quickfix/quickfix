package org.quickfix.field; 
import org.quickfix.StringField; 
import java.util.Date; 

public class DeskID extends StringField 
{ 

  public DeskID() 
  { 
    super(284);
  } 
  public DeskID(String data) 
  { 
    super(284, data);
  } 
} 
