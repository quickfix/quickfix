package org.quickfix.field; 
import org.quickfix.CharField; 
import java.util.Date; 

public class ExecTransType extends CharField 
{ 
  public static final int FIELD = 20; 

  public ExecTransType() 
  { 
    super(20);
  } 
  public ExecTransType(char data) 
  { 
    super(20, data);
  } 
} 
