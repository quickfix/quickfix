package org.quickfix.field; 
import org.quickfix.UtcTimeStampField; 
import java.util.Date; 

public class TransBkdTime extends UtcTimeStampField 
{ 
  public static final int FIELD = 483; 

  public TransBkdTime() 
  { 
    super(483);
  } 
  public TransBkdTime(Date data) 
  { 
    super(483, data);
  } 
} 
