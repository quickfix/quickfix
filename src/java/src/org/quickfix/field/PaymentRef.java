package org.quickfix.field; 
import org.quickfix.StringField; 
import java.util.Date; 

public class PaymentRef extends StringField 
{ 

  public PaymentRef() 
  { 
    super(476);
  } 
  public PaymentRef(String data) 
  { 
    super(476, data);
  } 
} 
