package org.quickfix.field; 
import org.quickfix.StringField; 
import java.util.Date; 

public class SettlInstID extends StringField 
{ 
  public static final int FIELD = 162; 

  public SettlInstID() 
  { 
    super(162);
  } 
  public SettlInstID(String data) 
  { 
    super(162, data);
  } 
} 
