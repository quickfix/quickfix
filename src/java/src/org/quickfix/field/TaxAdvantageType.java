package org.quickfix.field; 
import org.quickfix.IntField; 
import java.util.Date; 

public class TaxAdvantageType extends IntField 
{ 

  public TaxAdvantageType() 
  { 
    super(495);
  } 
  public TaxAdvantageType(int data) 
  { 
    super(495, data);
  } 
} 
