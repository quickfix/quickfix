package org.quickfix.field; 
import org.quickfix.IntField; 
import java.util.Date; 

public class PriceType extends IntField 
{ 

  public PriceType() 
  { 
    super(423);
  } 
  public PriceType(int data) 
  { 
    super(423, data);
  } 
} 
