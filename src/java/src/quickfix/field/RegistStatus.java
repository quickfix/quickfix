package org.quickfix.field; 
import org.quickfix.CharField; 
import java.util.Date; 

public class RegistStatus extends CharField 
{ 
  public static final int FIELD = 506; 
public static final char ACCEPTED = 'A'; 
public static final char REJECTED = 'R'; 
public static final char HELD = 'H'; 
public static final char REMINDER = 'N'; 

  public RegistStatus() 
  { 
    super(506);
  } 
  public RegistStatus(char data) 
  { 
    super(506, data);
  } 
} 
