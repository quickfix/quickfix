package quickfix.field; 
import quickfix.DoubleField; 
import java.util.Date; 

public class StrikePrice extends DoubleField 
{ 
  public static final int FIELD = 202; 

  public StrikePrice() 
  { 
    super(202);
  } 
  public StrikePrice(double data) 
  { 
    super(202, data);
  } 
} 
