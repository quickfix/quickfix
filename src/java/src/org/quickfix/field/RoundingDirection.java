package org.quickfix.field; 
import org.quickfix.CharField; 
import java.util.Date; 

public class RoundingDirection extends CharField 
{ 
  public static final int FIELD = 468; 
public static final char ROUND_NEAREST = '0'; 
public static final char ROUND_DOWN = '1'; 
public static final char ROUND_UP = '2'; 

  public RoundingDirection() 
  { 
    super(468);
  } 
  public RoundingDirection(char data) 
  { 
    super(468, data);
  } 
} 
