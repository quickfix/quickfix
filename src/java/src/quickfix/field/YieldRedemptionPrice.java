package quickfix.field; 
import quickfix.DoubleField; 
import java.util.Date; 

public class YieldRedemptionPrice extends DoubleField 
{ 
  public static final int FIELD = 697; 

  public YieldRedemptionPrice() 
  { 
    super(697);
  } 
  public YieldRedemptionPrice(double data) 
  { 
    super(697, data);
  } 
} 
