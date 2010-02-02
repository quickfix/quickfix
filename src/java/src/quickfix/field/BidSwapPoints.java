package quickfix.field; 
import quickfix.DoubleField; 
import java.util.Date; 

public class BidSwapPoints extends DoubleField 
{ 
  public static final int FIELD = 1065; 

  public BidSwapPoints() 
  { 
    super(1065);
  } 
  public BidSwapPoints(double data) 
  { 
    super(1065, data);
  } 
} 
