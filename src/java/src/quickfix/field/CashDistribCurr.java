package org.quickfix.field; 
import org.quickfix.StringField; 
import java.util.Date; 

public class CashDistribCurr extends StringField 
{ 
  public static final int FIELD = 478; 

  public CashDistribCurr() 
  { 
    super(478);
  } 
  public CashDistribCurr(String data) 
  { 
    super(478, data);
  } 
} 
