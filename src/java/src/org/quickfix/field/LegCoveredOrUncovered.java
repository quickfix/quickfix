package org.quickfix.field; 
import org.quickfix.IntField; 
import java.util.Date; 

public class LegCoveredOrUncovered extends IntField 
{ 
  public static final int FIELD = 565; 

  public LegCoveredOrUncovered() 
  { 
    super(565);
  } 
  public LegCoveredOrUncovered(int data) 
  { 
    super(565, data);
  } 
} 
