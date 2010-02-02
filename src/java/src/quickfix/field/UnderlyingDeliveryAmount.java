package quickfix.field; 
import quickfix.DoubleField; 
import java.util.Date; 

public class UnderlyingDeliveryAmount extends DoubleField 
{ 
  public static final int FIELD = 1037; 

  public UnderlyingDeliveryAmount() 
  { 
    super(1037);
  } 
  public UnderlyingDeliveryAmount(double data) 
  { 
    super(1037, data);
  } 
} 
