package quickfix.field; 
import quickfix.DoubleField; 
import java.util.Date; 

public class LegBenchmarkPrice extends DoubleField 
{ 
  public static final int FIELD = 679; 

  public LegBenchmarkPrice() 
  { 
    super(679);
  } 
  public LegBenchmarkPrice(double data) 
  { 
    super(679, data);
  } 
} 
