package org.quickfix.field; 
import org.quickfix.CharField; 
import java.util.Date; 

public class LastCapacity extends CharField 
{ 
  public static final int FIELD = 29; 
public static final char A = '1'; 
public static final char XA = '2'; 
public static final char XP = '3'; 
public static final char P = '4'; 

  public LastCapacity() 
  { 
    super(29);
  } 
  public LastCapacity(char data) 
  { 
    super(29, data);
  } 
} 
