package org.quickfix.field; 
import org.quickfix.StringField; 
import java.util.Date; 

public class CashDistribPayRef extends StringField 
{ 

  public CashDistribPayRef() 
  { 
    super(501);
  } 
  public CashDistribPayRef(String data) 
  { 
    super(501, data);
  } 
} 
