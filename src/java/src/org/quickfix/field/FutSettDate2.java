package org.quickfix.field; 
import org.quickfix.StringField; 
import java.util.Date; 

public class FutSettDate2 extends StringField 
{ 
  public static final int FIELD = 193; 

  public FutSettDate2() 
  { 
    super(193);
  } 
  public FutSettDate2(String data) 
  { 
    super(193, data);
  } 
} 
