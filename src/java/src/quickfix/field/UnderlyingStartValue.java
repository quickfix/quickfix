package quickfix.field; 
import quickfix.DoubleField; 
import java.util.Date; 

public class UnderlyingStartValue extends DoubleField 
{ 
  public static final int FIELD = 884; 

  public UnderlyingStartValue() 
  { 
    super(884);
  } 
  public UnderlyingStartValue(double data) 
  { 
    super(884, data);
  } 
} 
