package org.quickfix.field; 
import org.quickfix.CharField; 
import java.util.Date; 

public class LegPositionEffect extends CharField 
{ 
  public static final int FIELD = 564; 
public static final char OPEN = 'O'; 
public static final char CLOSE = 'C'; 
public static final char ROLLED = 'R'; 
public static final char FIFO = 'F'; 

  public LegPositionEffect() 
  { 
    super(564);
  } 
  public LegPositionEffect(char data) 
  { 
    super(564, data);
  } 
} 
