package org.quickfix.field; 
import org.quickfix.CharField; 
import java.util.Date; 

public class CommType extends CharField 
{ 
public static final char PER_SHARE = '1'; 
public static final char PERCENTAGE = '2'; 
public static final char ABSOLUTE = '3'; 

  public CommType() 
  { 
    super(13);
  } 
  public CommType(char data) 
  { 
    super(13, data);
  } 
} 
