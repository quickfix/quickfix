package quickfix.field; 
import quickfix.DoubleField; 
import java.util.Date; 

public class UnderlyingCurrentValue extends DoubleField 
{ 
  public static final int FIELD = 885; 

  public UnderlyingCurrentValue() 
  { 
    super(885);
  } 
  public UnderlyingCurrentValue(double data) 
  { 
    super(885, data);
  } 
} 
