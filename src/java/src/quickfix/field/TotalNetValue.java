package quickfix.field; 
import quickfix.DoubleField; 
import java.util.Date; 

public class TotalNetValue extends DoubleField 
{ 
  public static final int FIELD = 900; 

  public TotalNetValue() 
  { 
    super(900);
  } 
  public TotalNetValue(double data) 
  { 
    super(900, data);
  } 
} 
