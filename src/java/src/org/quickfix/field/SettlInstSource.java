package org.quickfix.field; 
import org.quickfix.CharField; 
import java.util.Date; 

public class SettlInstSource extends CharField 
{ 
  public static final int FIELD = 165; 
public static final char BROKERS_INSTRUCTIONS = '1'; 
public static final char INSTITUTIONS_INSTRUCTIONS = '2'; 
public static final char INVESTOR = '3'; 

  public SettlInstSource() 
  { 
    super(165);
  } 
  public SettlInstSource(char data) 
  { 
    super(165, data);
  } 
} 
