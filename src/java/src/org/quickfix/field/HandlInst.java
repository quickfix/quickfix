package org.quickfix.field; 
import org.quickfix.CharField; 
import java.util.Date; 

public class HandlInst extends CharField 
{ 
  public static final int FIELD = 21; 
public static final char AUTO_EXEC_PRIV = '1'; 
public static final char AUTO_EXEC_PUB = '2'; 
public static final char MANUAL = '3'; 

  public HandlInst() 
  { 
    super(21);
  } 
  public HandlInst(char data) 
  { 
    super(21, data);
  } 
} 
