package org.quickfix.field; 
import org.quickfix.StringField; 
import java.util.Date; 

public class PaymentRemitterID extends StringField 
{ 

  public PaymentRemitterID() 
  { 
    super(505);
  } 
  public PaymentRemitterID(String data) 
  { 
    super(505, data);
  } 
} 
