package org.quickfix.field; 
import org.quickfix.StringField; 
import java.util.Date; 

public class SecondaryTradeReportRefID extends StringField 
{ 
  public static final int FIELD = 881; 

  public SecondaryTradeReportRefID() 
  { 
    super(881);
  } 
  public SecondaryTradeReportRefID(String data) 
  { 
    super(881, data);
  } 
} 
