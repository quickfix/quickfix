package org.quickfix.field; 
import org.quickfix.StringField; 
import java.util.Date; 

public class EncodedListStatusText extends StringField 
{ 

  public EncodedListStatusText() 
  { 
    super(446);
  } 
  public EncodedListStatusText(String data) 
  { 
    super(446, data);
  } 
} 
