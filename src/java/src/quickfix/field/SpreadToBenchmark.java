package quickfix.field; 
import quickfix.DoubleField; 
import java.util.Date; 

public class SpreadToBenchmark extends DoubleField 
{ 
  public static final int FIELD = 218; 

  public SpreadToBenchmark() 
  { 
    super(218);
  } 
  public SpreadToBenchmark(double data) 
  { 
    super(218, data);
  } 
} 
