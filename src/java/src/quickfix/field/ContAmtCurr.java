package org.quickfix.field; 
import org.quickfix.StringField; 
import java.util.Date; 

public class ContAmtCurr extends StringField 
{ 
  public static final int FIELD = 521; 

  public ContAmtCurr() 
  { 
    super(521);
  } 
  public ContAmtCurr(String data) 
  { 
    super(521, data);
  } 
} 
