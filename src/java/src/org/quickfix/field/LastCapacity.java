package org.quickfix.field; 
import org.quickfix.CharField; 
import java.util.Date; 

public class LastCapacity extends CharField 
{ 
public static final char AGENT = '1'; 
public static final char CROSS_AS_AGENT = '2'; 
public static final char CROSS_AS_PRINCIPAL = '3'; 
public static final char PRINCIPAL = '4'; 

  public LastCapacity() 
  { 
    super(29);
  } 
  public LastCapacity(char data) 
  { 
    super(29, data);
  } 
} 
