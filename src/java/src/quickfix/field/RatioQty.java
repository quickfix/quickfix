package quickfix.field; 
import quickfix.DoubleField; 
import java.util.Date; 

public class RatioQty extends DoubleField 
{ 
  public static final int FIELD = 319; 

  public RatioQty() 
  { 
    super(319);
  } 
  public RatioQty(double data) 
  { 
    super(319, data);
  } 
} 
