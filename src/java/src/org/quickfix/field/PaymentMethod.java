package org.quickfix.field; 
import org.quickfix.IntField; 
import java.util.Date; 

public class PaymentMethod extends IntField 
{ 

  public PaymentMethod() 
  { 
    super(492);
  } 
  public PaymentMethod(int data) 
  { 
    super(492, data);
  } 
} 
