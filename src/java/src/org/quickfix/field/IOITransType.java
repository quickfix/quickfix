package org.quickfix.field; 
import org.quickfix.CharField; 
import java.util.Date; 

public class IOITransType extends CharField 
{ 
  public static final int FIELD = 28; 
public static final char NEW = 'N'; 
public static final char CANCEL = 'C'; 
public static final char REPLACE = 'R'; 

  public IOITransType() 
  { 
    super(28);
  } 
  public IOITransType(char data) 
  { 
    super(28, data);
  } 
} 
