package org.quickfix.field; 
import org.quickfix.CharField; 
import java.util.Date; 

public class ExecTransType extends CharField 
{ 
public static final char NEW = '0'; 
public static final char CANCEL = '1'; 
public static final char CORRECT = '2'; 
public static final char STATUS = '3'; 

  public ExecTransType() 
  { 
    super(20);
  } 
  public ExecTransType(char data) 
  { 
    super(20, data);
  } 
} 
