package org.quickfix.field; 
import org.quickfix.CharField; 
import java.util.Date; 

public class SettlInstTransType extends CharField 
{ 
public static final char NEW = 'N'; 
public static final char CANCEL = 'C'; 
public static final char REPLACE = 'R'; 

  public SettlInstTransType() 
  { 
    super(163);
  } 
  public SettlInstTransType(char data) 
  { 
    super(163, data);
  } 
} 
