package org.quickfix.field; 
import org.quickfix.UtcDateField; 
import java.util.Date; 

public class CouponPaymentDate extends UtcDateField 
{ 

  public CouponPaymentDate() 
  { 
    super(224);
  } 
  public CouponPaymentDate(Date data) 
  { 
    super(224, data);
  } 
} 
