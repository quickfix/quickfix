package org.quickfix.field; 
import org.quickfix.CharField; 
import java.util.Date; 

public class DlvyInstType extends CharField 
{ 
  public static final int FIELD = 787; 
public static final char SECURITIES = 'S'; 
public static final char CASH = 'C'; 

  public DlvyInstType() 
  { 
    super(787);
  } 
  public DlvyInstType(char data) 
  { 
    super(787, data);
  } 
} 
