package org.quickfix.field; 
import org.quickfix.DoubleField; 
import java.util.Date; 

public class MDEntryPx extends DoubleField 
{ 
  public static final int FIELD = 270; 

  public MDEntryPx() 
  { 
    super(270);
  } 
  public MDEntryPx(double data) 
  { 
    super(270, data);
  } 
} 
