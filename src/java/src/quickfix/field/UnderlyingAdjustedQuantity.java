package quickfix.field; 
import quickfix.DoubleField; 
import java.util.Date; 

public class UnderlyingAdjustedQuantity extends DoubleField 
{ 
  public static final int FIELD = 1044; 

  public UnderlyingAdjustedQuantity() 
  { 
    super(1044);
  } 
  public UnderlyingAdjustedQuantity(double data) 
  { 
    super(1044, data);
  } 
} 
