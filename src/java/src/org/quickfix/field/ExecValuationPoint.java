package org.quickfix.field; 
import org.quickfix.UtcTimeStampField; 
import java.util.Date; 

public class ExecValuationPoint extends UtcTimeStampField 
{ 

  public ExecValuationPoint() 
  { 
    super(515);
  } 
  public ExecValuationPoint(Date data) 
  { 
    super(515, data);
  } 
} 
