package org.quickfix.field; 
import org.quickfix.StringField; 
import java.util.Date; 

public class AllocSettlCurrency extends StringField 
{ 
  public static final int FIELD = 736; 

  public AllocSettlCurrency() 
  { 
    super(736);
  } 
  public AllocSettlCurrency(String data) 
  { 
    super(736, data);
  } 
} 
