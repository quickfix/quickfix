package quickfix.field; 
import quickfix.DoubleField; 
import java.util.Date; 

public class LegBidForwardPoints extends DoubleField 
{ 
  public static final int FIELD = 1067; 

  public LegBidForwardPoints() 
  { 
    super(1067);
  } 
  public LegBidForwardPoints(double data) 
  { 
    super(1067, data);
  } 
} 
