package org.quickfix.field; 
import org.quickfix.CharField; 
import java.util.Date; 

public class UnderlyingOptAttribute extends CharField 
{ 
  public static final int FIELD = 317; 

  public UnderlyingOptAttribute() 
  { 
    super(317);
  } 
  public UnderlyingOptAttribute(char data) 
  { 
    super(317, data);
  } 
} 
