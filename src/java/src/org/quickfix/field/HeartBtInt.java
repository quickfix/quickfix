package org.quickfix.field; 
import org.quickfix.IntField; 
import java.util.Date; 

public class HeartBtInt extends IntField 
{ 

  public HeartBtInt() 
  { 
    super(108);
  } 
  public HeartBtInt(int data) 
  { 
    super(108, data);
  } 
} 
