package quickfix.field; 
import quickfix.IntField; 
import java.util.Date; 

public class LegBenchmarkPriceType extends IntField 
{ 
  public static final int FIELD = 680; 

  public LegBenchmarkPriceType() 
  { 
    super(680);
  } 
  public LegBenchmarkPriceType(int data) 
  { 
    super(680, data);
  } 
} 
