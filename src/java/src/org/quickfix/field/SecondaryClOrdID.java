package org.quickfix.field; 
import org.quickfix.StringField; 
import java.util.Date; 

public class SecondaryClOrdID extends StringField 
{ 
  public static final int FIELD = 526; 

  public SecondaryClOrdID() 
  { 
    super(526);
  } 
  public SecondaryClOrdID(String data) 
  { 
    super(526, data);
  } 
} 
