package org.quickfix.field; 
import org.quickfix.StringField; 
import java.util.Date; 

public class MiscFeeCurr extends StringField 
{ 

  public MiscFeeCurr() 
  { 
    super(138);
  } 
  public MiscFeeCurr(String data) 
  { 
    super(138, data);
  } 
} 
