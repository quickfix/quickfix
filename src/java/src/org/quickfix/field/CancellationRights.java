package org.quickfix.field; 
import org.quickfix.CharField; 
import java.util.Date; 

public class CancellationRights extends CharField 
{ 

  public CancellationRights() 
  { 
    super(480);
  } 
  public CancellationRights(char data) 
  { 
    super(480, data);
  } 
} 
