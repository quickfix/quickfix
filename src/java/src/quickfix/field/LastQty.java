package quickfix.field; 
import quickfix.DoubleField; 
import java.util.Date; 

public class LastQty extends DoubleField 
{ 
  public static final int FIELD = 32; 

  public LastQty() 
  { 
    super(32);
  } 
  public LastQty(double data) 
  { 
    super(32, data);
  } 
} 
