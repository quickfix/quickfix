package org.quickfix.field; 
import org.quickfix.IntField; 
import java.util.Date; 

public class MaxMessageSize extends IntField 
{ 

  public MaxMessageSize() 
  { 
    super(383);
  } 
  public MaxMessageSize(int data) 
  { 
    super(383, data);
  } 
} 
