package org.quickfix.field; 
import org.quickfix.StringField; 
import java.util.Date; 

public class UnderlyingRedemptionDate extends StringField 
{ 
  public static final int FIELD = 247; 

  public UnderlyingRedemptionDate() 
  { 
    super(247);
  } 
  public UnderlyingRedemptionDate(String data) 
  { 
    super(247, data);
  } 
} 
