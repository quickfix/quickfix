package org.quickfix.field; 
import org.quickfix.StringField; 
import java.util.Date; 

public class IOIShares extends StringField 
{ 
  public static final int FIELD = 27; 
public static final String SMALL = "S"; 
public static final String MEDIUM = "M"; 
public static final String LARGE = "L"; 

  public IOIShares() 
  { 
    super(27);
  } 
  public IOIShares(String data) 
  { 
    super(27, data);
  } 
} 
