package org.quickfix.field; 
import org.quickfix.StringField; 
import java.util.Date; 

public class RelatdSym extends StringField 
{ 

  public RelatdSym() 
  { 
    super(46);
  } 
  public RelatdSym(String data) 
  { 
    super(46, data);
  } 
} 
