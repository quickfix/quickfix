package org.quickfix.field; 
import org.quickfix.UtcDateField; 
import java.util.Date; 

public class BasisFeatureDate extends UtcDateField 
{ 

  public BasisFeatureDate() 
  { 
    super(259);
  } 
  public BasisFeatureDate(Date data) 
  { 
    super(259, data);
  } 
} 
