package quickfix.field; 
import quickfix.StringField; 
import java.util.Date; 

public class LegBenchmarkCurveName extends StringField 
{ 
  public static final int FIELD = 677; 

  public LegBenchmarkCurveName() 
  { 
    super(677);
  } 
  public LegBenchmarkCurveName(String data) 
  { 
    super(677, data);
  } 
} 
