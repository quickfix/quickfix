package org.quickfix.field; 
import org.quickfix.StringField; 
import java.util.Date; 

public class ListStatusText extends StringField 
{ 

  public ListStatusText() 
  { 
    super(444);
  } 
  public ListStatusText(String data) 
  { 
    super(444, data);
  } 
} 
