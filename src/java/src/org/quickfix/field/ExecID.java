package org.quickfix.field; 
import org.quickfix.StringField; 
import java.util.Date; 

public class ExecID extends StringField 
{ 
  public static final int FIELD = 17; 

  public ExecID() 
  { 
    super(17);
  } 
  public ExecID(String data) 
  { 
    super(17, data);
  } 
} 
