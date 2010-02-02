package quickfix.field; 
import quickfix.DoubleField; 
import java.util.Date; 

public class LegOfferForwardPoints extends DoubleField 
{ 
  public static final int FIELD = 1068; 

  public LegOfferForwardPoints() 
  { 
    super(1068);
  } 
  public LegOfferForwardPoints(double data) 
  { 
    super(1068, data);
  } 
} 
