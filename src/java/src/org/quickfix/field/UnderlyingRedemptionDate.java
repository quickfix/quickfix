package org.quickfix.field; 
import org.quickfix.UtcDateField; 
import java.util.Date; 

public class UnderlyingRedemptionDate extends UtcDateField 
{ 

  public UnderlyingRedemptionDate() 
  { 
    super(247);
  } 
  public UnderlyingRedemptionDate(Date data) 
  { 
    super(247, data);
  } 
} 
