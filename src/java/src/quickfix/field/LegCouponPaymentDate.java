package quickfix.field; 
import quickfix.StringField; 
import java.util.Date; 

public class LegCouponPaymentDate extends StringField 
{ 
  public static final int FIELD = 248; 

  public LegCouponPaymentDate() 
  { 
    super(248);
  } 
  public LegCouponPaymentDate(String data) 
  { 
    super(248, data);
  } 
} 
