package org.quickfix.field; 
import org.quickfix.CharField; 
import java.util.Date; 

public class DayBookingInst extends CharField 
{ 
  public static final int FIELD = 589; 

  public DayBookingInst() 
  { 
    super(589);
  } 
  public DayBookingInst(char data) 
  { 
    super(589, data);
  } 
} 
