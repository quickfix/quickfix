package quickfix.field; 
import quickfix.DoubleField; 
import java.util.Date; 

public class MinPriceIncrement extends DoubleField 
{ 
  public static final int FIELD = 969; 

  public MinPriceIncrement() 
  { 
    super(969);
  } 
  public MinPriceIncrement(double data) 
  { 
    super(969, data);
  } 
} 
