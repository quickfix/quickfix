package org.quickfix.field; 
import org.quickfix.CharField; 
import java.util.Date; 

public class Urgency extends CharField 
{ 
  public static final int FIELD = 61; 
public static final char NORMAL = '0'; 
public static final char FLASH = '1'; 
public static final char BACKGROUND = '2'; 

  public Urgency() 
  { 
    super(61);
  } 
  public Urgency(char data) 
  { 
    super(61, data);
  } 
} 
