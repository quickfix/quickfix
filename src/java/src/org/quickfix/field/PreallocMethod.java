package org.quickfix.field; 
import org.quickfix.CharField; 
import java.util.Date; 

public class PreAllocMethod extends CharField 
{ 
  public static final int FIELD = 591; 
public static final char PRO_RATA = '0'; 
public static final char DO_NOT_PRO_RATA = '1'; 

  public PreAllocMethod() 
  { 
    super(591);
  } 
  public PreAllocMethod(char data) 
  { 
    super(591, data);
  } 
} 
