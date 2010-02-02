package quickfix.field; 
import quickfix.DoubleField; 
import java.util.Date; 

public class OfferSwapPoints extends DoubleField 
{ 
  public static final int FIELD = 1066; 

  public OfferSwapPoints() 
  { 
    super(1066);
  } 
  public OfferSwapPoints(double data) 
  { 
    super(1066, data);
  } 
} 
