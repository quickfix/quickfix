package org.quickfix.field; 
import org.quickfix.CharField; 
import java.util.Date; 

public class TickDirection extends CharField 
{ 
  public static final int FIELD = 274; 
public static final char PLUS = '0'; 
public static final char ZERO_PLUS = '1'; 
public static final char MINUS = '2'; 
public static final char ZERO_MINUS = '3'; 

  public TickDirection() 
  { 
    super(274);
  } 
  public TickDirection(char data) 
  { 
    super(274, data);
  } 
} 
