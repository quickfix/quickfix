package org.quickfix.field; 
import org.quickfix.IntField; 
import java.util.Date; 

public class LegPriceType extends IntField 
{ 
  public static final int FIELD = 686; 

  public LegPriceType() 
  { 
    super(686);
  } 
  public LegPriceType(int data) 
  { 
    super(686, data);
  } 
} 
