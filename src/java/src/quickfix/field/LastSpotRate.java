package quickfix.field; 
import quickfix.DoubleField; 
import java.util.Date; 

public class LastSpotRate extends DoubleField 
{ 
  public static final int FIELD = 194; 

  public LastSpotRate() 
  { 
    super(194);
  } 
  public LastSpotRate(double data) 
  { 
    super(194, data);
  } 
} 
