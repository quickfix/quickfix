package org.quickfix.field; 
import org.quickfix.IntField; 
import java.util.Date; 

public class UnderlyingSettlPriceType extends IntField 
{ 
  public static final int FIELD = 733; 
public static final int FINAL = 1; 
public static final int THEORETICAL = 2; 

  public UnderlyingSettlPriceType() 
  { 
    super(733);
  } 
  public UnderlyingSettlPriceType(int data) 
  { 
    super(733, data);
  } 
} 
