package org.quickfix.field; 
import org.quickfix.IntField; 
import java.util.Date; 

public class BidDescriptorType extends IntField 
{ 

  public BidDescriptorType() 
  { 
    super(399);
  } 
  public BidDescriptorType(int data) 
  { 
    super(399, data);
  } 
} 
