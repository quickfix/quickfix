package org.quickfix.field; 
import org.quickfix.CharField; 
import java.util.Date; 

public class HandlInst extends CharField 
{ 
  public static final int FIELD = 21; 
public static final char AUTOMATED_EXECUTION_ORDER = '1'; 
public static final char AUTOMATED_EXECUTION_ORDER = '2'; 
public static final char MANUAL_ORDER = '3'; 

  public HandlInst() 
  { 
    super(21);
  } 
  public HandlInst(char data) 
  { 
    super(21, data);
  } 
} 
