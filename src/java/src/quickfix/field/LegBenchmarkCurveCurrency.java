package quickfix.field; 
import quickfix.StringField; 
import java.util.Date; 

public class LegBenchmarkCurveCurrency extends StringField 
{ 
  public static final int FIELD = 676; 

  public LegBenchmarkCurveCurrency() 
  { 
    super(676);
  } 
  public LegBenchmarkCurveCurrency(String data) 
  { 
    super(676, data);
  } 
} 
