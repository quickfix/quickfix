package org.quickfix.field; 
import org.quickfix.CharField; 
import java.util.Date; 

public class ExecPriceType extends CharField 
{ 
  public static final int FIELD = 484; 

  public ExecPriceType() 
  { 
    super(484);
  } 
  public ExecPriceType(char data) 
  { 
    super(484, data);
  } 
} 
