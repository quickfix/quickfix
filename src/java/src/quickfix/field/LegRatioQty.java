package quickfix.field; 
import quickfix.DoubleField; 
import java.util.Date; 

public class LegRatioQty extends DoubleField 
{ 
  public static final int FIELD = 623; 

  public LegRatioQty() 
  { 
    super(623);
  } 
  public LegRatioQty(double data) 
  { 
    super(623, data);
  } 
} 
