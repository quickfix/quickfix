package org.quickfix.field; 
import org.quickfix.DoubleField; 
import java.util.Date; 

public class ReportedPx extends DoubleField 
{ 
  public static final int FIELD = 861; 

  public ReportedPx() 
  { 
    super(861);
  } 
  public ReportedPx(double data) 
  { 
    super(861, data);
  } 
} 
