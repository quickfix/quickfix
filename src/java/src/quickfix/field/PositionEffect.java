package org.quickfix.field; 
import org.quickfix.CharField; 
import java.util.Date; 

public class PositionEffect extends CharField 
{ 
  public static final int FIELD = 77; 
public static final char OPEN = 'O'; 
public static final char CLOSE = 'C'; 
public static final char ROLLED = 'R'; 
public static final char FIFO = 'F'; 

  public PositionEffect() 
  { 
    super(77);
  } 
  public PositionEffect(char data) 
  { 
    super(77, data);
  } 
} 
