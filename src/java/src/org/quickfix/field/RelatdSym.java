package org.quickfix.field; 
import org.quickfix.StringField; 
import java.util.Date; 

public class RelatdSym extends StringField 
{ 
  public static final int FIELD = 46; 

  public RelatdSym() 
  { 
    super(46);
  } 
  public RelatdSym(String data) 
  { 
    super(46, data);
  } 
} 
