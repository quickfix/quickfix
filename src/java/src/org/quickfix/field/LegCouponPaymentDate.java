package org.quickfix.field; 
import org.quickfix.UtcDateField; 
import java.util.Date; 

public class LegCouponPaymentDate extends UtcDateField 
{ 

  public LegCouponPaymentDate() 
  { 
    super(248);
  } 
  public LegCouponPaymentDate(Date data) 
  { 
    super(248, data);
  } 
} 
