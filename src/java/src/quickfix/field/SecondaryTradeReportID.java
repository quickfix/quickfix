package org.quickfix.field; 
import org.quickfix.StringField; 
import java.util.Date; 

public class SecondaryTradeReportID extends StringField 
{ 
  public static final int FIELD = 818; 

  public SecondaryTradeReportID() 
  { 
    super(818);
  } 
  public SecondaryTradeReportID(String data) 
  { 
    super(818, data);
  } 
} 
