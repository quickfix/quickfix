package org.quickfix.field; 
import org.quickfix.CharField; 
import java.util.Date; 

public class RoundingDirection extends CharField 
{ 
  public static final int FIELD = 468; 

  public RoundingDirection() 
  { 
    super(468);
  } 
  public RoundingDirection(char data) 
  { 
    super(468, data);
  } 
} 
