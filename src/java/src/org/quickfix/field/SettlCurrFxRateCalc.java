package org.quickfix.field; 
import org.quickfix.CharField; 
import java.util.Date; 

public class SettlCurrFxRateCalc extends CharField 
{ 
  public static final int FIELD = 156; 

  public SettlCurrFxRateCalc() 
  { 
    super(156);
  } 
  public SettlCurrFxRateCalc(char data) 
  { 
    super(156, data);
  } 
} 
