package org.quickfix.field; 
import org.quickfix.StringField; 
import java.util.Date; 

public class YieldRedemptionDate extends StringField 
{ 
  public static final int FIELD = 696; 

  public YieldRedemptionDate() 
  { 
    super(696);
  } 
  public YieldRedemptionDate(String data) 
  { 
    super(696, data);
  } 
} 
