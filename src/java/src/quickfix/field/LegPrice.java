package quickfix.field; 
import quickfix.DoubleField; 
import java.util.Date; 

public class LegPrice extends DoubleField 
{ 
  public static final int FIELD = 566; 

  public LegPrice() 
  { 
    super(566);
  } 
  public LegPrice(double data) 
  { 
    super(566, data);
  } 
} 
