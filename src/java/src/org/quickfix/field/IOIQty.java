package org.quickfix.field; 
import org.quickfix.StringField; 
import java.util.Date; 

public class IOIQty extends StringField 
{ 
  public static final int FIELD = 27; 

  public IOIQty() 
  { 
    super(27);
  } 
  public IOIQty(String data) 
  { 
    super(27, data);
  } 
} 
