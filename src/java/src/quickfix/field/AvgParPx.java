package quickfix.field; 
import quickfix.DoubleField; 
import java.util.Date; 

public class AvgParPx extends DoubleField 
{ 
  public static final int FIELD = 860; 

  public AvgParPx() 
  { 
    super(860);
  } 
  public AvgParPx(double data) 
  { 
    super(860, data);
  } 
} 
