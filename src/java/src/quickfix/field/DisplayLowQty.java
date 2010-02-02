package quickfix.field; 
import quickfix.DoubleField; 
import java.util.Date; 

public class DisplayLowQty extends DoubleField 
{ 
  public static final int FIELD = 1085; 

  public DisplayLowQty() 
  { 
    super(1085);
  } 
  public DisplayLowQty(double data) 
  { 
    super(1085, data);
  } 
} 
