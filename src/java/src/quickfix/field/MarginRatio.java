package quickfix.field; 
import quickfix.DoubleField; 
import java.util.Date; 

public class MarginRatio extends DoubleField 
{ 
  public static final int FIELD = 898; 

  public MarginRatio() 
  { 
    super(898);
  } 
  public MarginRatio(double data) 
  { 
    super(898, data);
  } 
} 
