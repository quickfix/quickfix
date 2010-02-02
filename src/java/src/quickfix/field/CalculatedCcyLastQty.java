package quickfix.field; 
import quickfix.DoubleField; 
import java.util.Date; 

public class CalculatedCcyLastQty extends DoubleField 
{ 
  public static final int FIELD = 1056; 

  public CalculatedCcyLastQty() 
  { 
    super(1056);
  } 
  public CalculatedCcyLastQty(double data) 
  { 
    super(1056, data);
  } 
} 
