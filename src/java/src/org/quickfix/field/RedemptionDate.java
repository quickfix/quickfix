package org.quickfix.field; 
import org.quickfix.UtcDateField; 
import java.util.Date; 

public class RedemptionDate extends UtcDateField 
{ 
  public static final int FIELD = 240; 

  public RedemptionDate() 
  { 
    super(240);
  } 
  public RedemptionDate(Date data) 
  { 
    super(240, data);
  } 
} 
