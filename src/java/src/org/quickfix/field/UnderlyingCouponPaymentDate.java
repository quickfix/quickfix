package org.quickfix.field; 
import org.quickfix.UtcDateField; 
import java.util.Date; 

public class UnderlyingCouponPaymentDate extends UtcDateField 
{ 

  public UnderlyingCouponPaymentDate() 
  { 
    super(241);
  } 
  public UnderlyingCouponPaymentDate(Date data) 
  { 
    super(241, data);
  } 
} 
