package org.quickfix.field; 
import org.quickfix.IntField; 
import java.util.Date; 

public class NoContAmts extends IntField 
{ 

  public NoContAmts() 
  { 
    super(518);
  } 
  public NoContAmts(int data) 
  { 
    super(518, data);
  } 
} 
