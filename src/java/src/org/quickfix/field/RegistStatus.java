package org.quickfix.field; 
import org.quickfix.CharField; 
import java.util.Date; 

public class RegistStatus extends CharField 
{ 

  public RegistStatus() 
  { 
    super(506);
  } 
  public RegistStatus(char data) 
  { 
    super(506, data);
  } 
} 
