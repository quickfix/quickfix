package org.quickfix.field; 
import org.quickfix.CharField; 
import java.util.Date; 

public class IOIQltyInd extends CharField 
{ 
public static final char LOW = 'L'; 
public static final char MEDIUM = 'M'; 
public static final char HIGH = 'H'; 

  public IOIQltyInd() 
  { 
    super(25);
  } 
  public IOIQltyInd(char data) 
  { 
    super(25, data);
  } 
} 
