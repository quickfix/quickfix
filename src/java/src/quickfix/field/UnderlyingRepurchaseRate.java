package quickfix.field; 
import quickfix.DoubleField; 
import java.util.Date; 

public class UnderlyingRepurchaseRate extends DoubleField 
{ 
  public static final int FIELD = 245; 

  public UnderlyingRepurchaseRate() 
  { 
    super(245);
  } 
  public UnderlyingRepurchaseRate(double data) 
  { 
    super(245, data);
  } 
} 
