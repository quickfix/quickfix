package org.quickfix.field; 
import org.quickfix.StringField; 
import java.util.Date; 

public class SettlInstReqID extends StringField 
{ 
  public static final int FIELD = 791; 

  public SettlInstReqID() 
  { 
    super(791);
  } 
  public SettlInstReqID(String data) 
  { 
    super(791, data);
  } 
} 
