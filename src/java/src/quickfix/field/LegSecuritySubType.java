package org.quickfix.field; 
import org.quickfix.StringField; 
import java.util.Date; 

public class LegSecuritySubType extends StringField 
{ 
  public static final int FIELD = 764; 

  public LegSecuritySubType() 
  { 
    super(764);
  } 
  public LegSecuritySubType(String data) 
  { 
    super(764, data);
  } 
} 
