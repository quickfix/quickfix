package quickfix.field; 
import quickfix.DoubleField; 
import java.util.Date; 

public class ValueOfFutures extends DoubleField 
{ 
  public static final int FIELD = 408; 

  public ValueOfFutures() 
  { 
    super(408);
  } 
  public ValueOfFutures(double data) 
  { 
    super(408, data);
  } 
} 
