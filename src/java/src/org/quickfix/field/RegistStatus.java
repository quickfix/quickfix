package org.quickfix.field; 
import org.quickfix.CharField; 
import java.util.Date; 

public class RegistStatus extends CharField 
{ 
  public static final int FIELD = 506; 

  public RegistStatus() 
  { 
    super(506);
  } 
  public RegistStatus(char data) 
  { 
    super(506, data);
  } 
} 
