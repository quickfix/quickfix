package quickfix.field; 
import quickfix.StringField; 
import java.util.Date; 

public class BenchmarkCurveCurrency extends StringField 
{ 
  public static final int FIELD = 220; 

  public BenchmarkCurveCurrency() 
  { 
    super(220);
  } 
  public BenchmarkCurveCurrency(String data) 
  { 
    super(220, data);
  } 
} 
