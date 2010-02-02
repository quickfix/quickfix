package quickfix.field; 
import quickfix.DoubleField; 
import java.util.Date; 

public class TriggerNewPrice extends DoubleField 
{ 
  public static final int FIELD = 1110; 

  public TriggerNewPrice() 
  { 
    super(1110);
  } 
  public TriggerNewPrice(double data) 
  { 
    super(1110, data);
  } 
} 
