package org.quickfix.field; 
import org.quickfix.StringField; 
import java.util.Date; 

public class IOIQty extends StringField 
{ 
public static final String SMALL = "S"; 
public static final String MEDIUM = "M"; 
public static final String LARGE = "L"; 

  public IOIQty() 
  { 
    super(27);
  } 
  public IOIQty(String data) 
  { 
    super(27, data);
  } 
} 
