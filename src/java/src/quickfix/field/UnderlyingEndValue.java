package quickfix.field; 
import quickfix.DoubleField; 
import java.util.Date; 

public class UnderlyingEndValue extends DoubleField 
{ 
  public static final int FIELD = 886; 

  public UnderlyingEndValue() 
  { 
    super(886);
  } 
  public UnderlyingEndValue(double data) 
  { 
    super(886, data);
  } 
} 
