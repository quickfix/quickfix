package org.quickfix.field; 
import org.quickfix.IntField; 
import java.util.Date; 

public class RawDataLength extends IntField 
{ 

  public RawDataLength() 
  { 
    super(95);
  } 
  public RawDataLength(int data) 
  { 
    super(95, data);
  } 
} 
