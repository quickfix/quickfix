package quickfix.field; 
import quickfix.DoubleField; 
import java.util.Date; 

public class CouponRate extends DoubleField 
{ 
  public static final int FIELD = 223; 

  public CouponRate() 
  { 
    super(223);
  } 
  public CouponRate(double data) 
  { 
    super(223, data);
  } 
} 
