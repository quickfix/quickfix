package org.quickfix.field; 
import org.quickfix.UtcDateField; 
import java.util.Date; 

public class TotalVolumeTradedDate extends UtcDateField 
{ 
  public static final int FIELD = 449; 

  public TotalVolumeTradedDate() 
  { 
    super(449);
  } 
  public TotalVolumeTradedDate(Date data) 
  { 
    super(449, data);
  } 
} 
