package quickfix.field; 
import quickfix.DoubleField; 
import java.util.Date; 

public class BuyVolume extends DoubleField 
{ 
  public static final int FIELD = 330; 

  public BuyVolume() 
  { 
    super(330);
  } 
  public BuyVolume(double data) 
  { 
    super(330, data);
  } 
} 
