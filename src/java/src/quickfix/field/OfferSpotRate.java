package quickfix.field; 
import quickfix.DoubleField; 
import java.util.Date; 

public class OfferSpotRate extends DoubleField 
{ 
  public static final int FIELD = 190; 

  public OfferSpotRate() 
  { 
    super(190);
  } 
  public OfferSpotRate(double data) 
  { 
    super(190, data);
  } 
} 
