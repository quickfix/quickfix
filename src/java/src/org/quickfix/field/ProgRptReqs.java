package org.quickfix.field; 
import org.quickfix.IntField; 
import java.util.Date; 

public class ProgRptReqs extends IntField 
{ 

  public ProgRptReqs() 
  { 
    super(414);
  } 
  public ProgRptReqs(int data) 
  { 
    super(414, data);
  } 
} 
