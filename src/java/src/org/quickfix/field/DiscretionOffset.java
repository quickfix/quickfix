package org.quickfix.field; 
import org.quickfix.DoubleField; 
import java.util.Date; 

public class DiscretionOffset extends DoubleField 
{ 

  public DiscretionOffset() 
  { 
    super(389);
  } 
  public DiscretionOffset(double data) 
  { 
    super(389, data);
  } 
} 
