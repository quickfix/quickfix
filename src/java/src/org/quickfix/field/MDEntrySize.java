package org.quickfix.field; 
import org.quickfix.DoubleField; 
import java.util.Date; 

public class MDEntrySize extends DoubleField 
{ 

  public MDEntrySize() 
  { 
    super(271);
  } 
  public MDEntrySize(double data) 
  { 
    super(271, data);
  } 
} 
