package quickfix.field; 
import quickfix.DoubleField; 
import java.util.Date; 

public class OfferPx extends DoubleField 
{ 
  public static final int FIELD = 133; 

  public OfferPx() 
  { 
    super(133);
  } 
  public OfferPx(double data) 
  { 
    super(133, data);
  } 
} 
