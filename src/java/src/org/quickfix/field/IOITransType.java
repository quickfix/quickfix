package org.quickfix.field; 
import org.quickfix.CharField; 
import java.util.Date; 

public class IOITransType extends CharField 
{ 
  public static final int FIELD = 28; 
public static final char IOINEW = 'N'; 
public static final char IOICANCEL = 'C'; 
public static final char IOIREPLACE = 'R'; 

  public IOITransType() 
  { 
    super(28);
  } 
  public IOITransType(char data) 
  { 
    super(28, data);
  } 
} 
