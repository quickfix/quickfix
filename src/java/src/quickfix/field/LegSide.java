package org.quickfix.field; 
import org.quickfix.CharField; 
import java.util.Date; 

public class LegSide extends CharField 
{ 
  public static final int FIELD = 624; 

  public LegSide() 
  { 
    super(624);
  } 
  public LegSide(char data) 
  { 
    super(624, data);
  } 
} 
