package org.quickfix.field; 
import org.quickfix.StringField; 
import java.util.Date; 

public class IOIRefID extends StringField 
{ 
  public static final int FIELD = 26; 

  public IOIRefID() 
  { 
    super(26);
  } 
  public IOIRefID(String data) 
  { 
    super(26, data);
  } 
} 
