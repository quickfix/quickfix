package org.quickfix.field; 
import org.quickfix.CharField; 
import java.util.Date; 

public class SettlInstMode extends CharField 
{ 
  public static final int FIELD = 160; 
public static final char DEFAULT = '0'; 
public static final char STANDING_INSTRUCTIONS_PROVIDED = '1'; 
public static final char SPECIFIC_ORDER_FOR_A_SINGLE_ACCOUNT = '4'; 
public static final char REQUEST_REJECT = '5'; 

  public SettlInstMode() 
  { 
    super(160);
  } 
  public SettlInstMode(char data) 
  { 
    super(160, data);
  } 
} 
