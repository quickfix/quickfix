package org.quickfix.field; 
import org.quickfix.CharField; 
import java.util.Date; 

public class OpenClose extends CharField 
{ 
  public static final int FIELD = 77; 
public static final char OPEN = 'O'; 
public static final char CLOSE = 'C'; 

  public OpenClose() 
  { 
    super(77);
  } 
  public OpenClose(char data) 
  { 
    super(77, data);
  } 
} 
