package quickfix.field; 
import quickfix.DoubleField; 
import java.util.Date; 

public class LiquidityValue extends DoubleField 
{ 
  public static final int FIELD = 404; 

  public LiquidityValue() 
  { 
    super(404);
  } 
  public LiquidityValue(double data) 
  { 
    super(404, data);
  } 
} 
