package org.quickfix.field; 
import org.quickfix.StringField; 
import java.util.Date; 

public class AffectedSecondaryOrderID extends StringField 
{ 

  public AffectedSecondaryOrderID() 
  { 
    super(536);
  } 
  public AffectedSecondaryOrderID(String data) 
  { 
    super(536, data);
  } 
} 
