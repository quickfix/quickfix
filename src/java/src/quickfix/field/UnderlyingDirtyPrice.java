package org.quickfix.field; 
import org.quickfix.DoubleField; 
import java.util.Date; 

public class UnderlyingDirtyPrice extends DoubleField 
{ 
  public static final int FIELD = 882; 

  public UnderlyingDirtyPrice() 
  { 
    super(882);
  } 
  public UnderlyingDirtyPrice(double data) 
  { 
    super(882, data);
  } 
} 
