package org.quickfix.field; 
import org.quickfix.UtcDateField; 
import java.util.Date; 

public class RedemptionDate extends UtcDateField 
{ 

  public RedemptionDate() 
  { 
    super(240);
  } 
  public RedemptionDate(Date data) 
  { 
    super(240, data);
  } 
} 
