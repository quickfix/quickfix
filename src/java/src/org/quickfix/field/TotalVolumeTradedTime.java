package org.quickfix.field; 
import org.quickfix.UtcTimeOnlyField; 
import java.util.Date; 

public class TotalVolumeTradedTime extends UtcTimeOnlyField 
{ 

  public TotalVolumeTradedTime() 
  { 
    super(450);
  } 
  public TotalVolumeTradedTime(Date data) 
  { 
    super(450, data);
  } 
} 
