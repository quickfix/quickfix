package quickfix.field; 
import quickfix.DoubleField; 
import java.util.Date; 

public class UnderlyingCouponRate extends DoubleField 
{ 
  public static final int FIELD = 435; 

  public UnderlyingCouponRate() 
  { 
    super(435);
  } 
  public UnderlyingCouponRate(double data) 
  { 
    super(435, data);
  } 
} 
