package org.quickfix.field; 
import org.quickfix.StringField; 
import java.util.Date; 

public class URLLink extends StringField 
{ 
  public static final int FIELD = 149; 

  public URLLink() 
  { 
    super(149);
  } 
  public URLLink(String data) 
  { 
    super(149, data);
  } 
} 
