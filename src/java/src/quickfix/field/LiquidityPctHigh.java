package quickfix.field; 
import quickfix.DoubleField; 
import java.util.Date; 

public class LiquidityPctHigh extends DoubleField 
{ 
  public static final int FIELD = 403; 

  public LiquidityPctHigh() 
  { 
    super(403);
  } 
  public LiquidityPctHigh(double data) 
  { 
    super(403, data);
  } 
} 
