package quickfix.field; 
import quickfix.IntField; 
import java.util.Date; 

public class BenchmarkPriceType extends IntField 
{ 
  public static final int FIELD = 663; 

  public BenchmarkPriceType() 
  { 
    super(663);
  } 
  public BenchmarkPriceType(int data) 
  { 
    super(663, data);
  } 
} 
