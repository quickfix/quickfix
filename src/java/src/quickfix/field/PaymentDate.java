package org.quickfix.field; 
import org.quickfix.StringField; 
import java.util.Date; 

public class PaymentDate extends StringField 
{ 
  public static final int FIELD = 504; 

  public PaymentDate() 
  { 
    super(504);
  } 
  public PaymentDate(String data) 
  { 
    super(504, data);
  } 
} 
