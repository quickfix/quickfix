package org.quickfix.field; 
import org.quickfix.StringField; 
import java.util.Date; 

public class LegStipulationType extends StringField 
{ 
  public static final int FIELD = 688; 

  public LegStipulationType() 
  { 
    super(688);
  } 
  public LegStipulationType(String data) 
  { 
    super(688, data);
  } 
} 
