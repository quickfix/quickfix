package org.quickfix.field; 
import org.quickfix.StringField; 
import java.util.Date; 

public class UnderlyingCouponPaymentDate extends StringField 
{ 
  public static final int FIELD = 241; 

  public UnderlyingCouponPaymentDate() 
  { 
    super(241);
  } 
  public UnderlyingCouponPaymentDate(String data) 
  { 
    super(241, data);
  } 
} 
