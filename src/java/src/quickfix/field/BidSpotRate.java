package quickfix.field; 
import quickfix.DoubleField; 
import java.util.Date; 

public class BidSpotRate extends DoubleField 
{ 
  public static final int FIELD = 188; 

  public BidSpotRate() 
  { 
    super(188);
  } 
  public BidSpotRate(double data) 
  { 
    super(188, data);
  } 
} 
