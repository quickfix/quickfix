package quickfix.field; 
import quickfix.DoubleField; 
import java.util.Date; 

public class BidYield extends DoubleField 
{ 
  public static final int FIELD = 632; 

  public BidYield() 
  { 
    super(632);
  } 
  public BidYield(double data) 
  { 
    super(632, data);
  } 
} 
