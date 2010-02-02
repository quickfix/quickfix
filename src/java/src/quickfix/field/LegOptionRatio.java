package quickfix.field; 
import quickfix.DoubleField; 
import java.util.Date; 

public class LegOptionRatio extends DoubleField 
{ 
  public static final int FIELD = 1017; 

  public LegOptionRatio() 
  { 
    super(1017);
  } 
  public LegOptionRatio(double data) 
  { 
    super(1017, data);
  } 
} 
