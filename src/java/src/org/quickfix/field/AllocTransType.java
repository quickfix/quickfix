package org.quickfix.field; 
import org.quickfix.CharField; 
import java.util.Date; 

public class AllocTransType extends CharField 
{ 
public static final char NEW = '0'; 
public static final char REPLACE = '1'; 
public static final char CANCEL = '2'; 
public static final char PRELIMINARY = '3'; 
public static final char CALCULATED = '4'; 
public static final char CALCULATED_WITHOUT_PRELIMINARY = '5'; 

  public AllocTransType() 
  { 
    super(71);
  } 
  public AllocTransType(char data) 
  { 
    super(71, data);
  } 
} 
