package org.quickfix.field; 
import org.quickfix.StringField; 
import java.util.Date; 

public class CouponPaymentDate extends StringField 
{ 
  public static final int FIELD = 224; 

  public CouponPaymentDate() 
  { 
    super(224);
  } 
  public CouponPaymentDate(String data) 
  { 
    super(224, data);
  } 
} 
