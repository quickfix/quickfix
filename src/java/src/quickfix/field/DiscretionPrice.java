package quickfix.field; 
import quickfix.DoubleField; 
import java.util.Date; 

public class DiscretionPrice extends DoubleField 
{ 
  public static final int FIELD = 845; 

  public DiscretionPrice() 
  { 
    super(845);
  } 
  public DiscretionPrice(double data) 
  { 
    super(845, data);
  } 
} 
