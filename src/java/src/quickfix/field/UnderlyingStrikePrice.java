package quickfix.field; 
import quickfix.DoubleField; 
import java.util.Date; 

public class UnderlyingStrikePrice extends DoubleField 
{ 
  public static final int FIELD = 316; 

  public UnderlyingStrikePrice() 
  { 
    super(316);
  } 
  public UnderlyingStrikePrice(double data) 
  { 
    super(316, data);
  } 
} 
