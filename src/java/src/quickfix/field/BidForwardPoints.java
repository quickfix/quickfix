package quickfix.field; 
import quickfix.DoubleField; 
import java.util.Date; 

public class BidForwardPoints extends DoubleField 
{ 
  public static final int FIELD = 189; 

  public BidForwardPoints() 
  { 
    super(189);
  } 
  public BidForwardPoints(double data) 
  { 
    super(189, data);
  } 
} 
