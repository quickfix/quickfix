package org.quickfix.field; 
import org.quickfix.IntField; 
import java.util.Date; 

public class UnderlyingSettlPriceType extends IntField 
{ 
  public static final int FIELD = 733; 

  public UnderlyingSettlPriceType() 
  { 
    super(733);
  } 
  public UnderlyingSettlPriceType(int data) 
  { 
    super(733, data);
  } 
} 
