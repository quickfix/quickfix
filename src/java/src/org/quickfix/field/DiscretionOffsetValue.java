package org.quickfix.field; 
import org.quickfix.DoubleField; 
import java.util.Date; 

public class DiscretionOffsetValue extends DoubleField 
{ 
  public static final int FIELD = 389; 

  public DiscretionOffsetValue() 
  { 
    super(389);
  } 
  public DiscretionOffsetValue(double data) 
  { 
    super(389, data);
  } 
} 
