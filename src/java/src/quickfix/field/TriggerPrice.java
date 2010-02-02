package quickfix.field; 
import quickfix.DoubleField; 
import java.util.Date; 

public class TriggerPrice extends DoubleField 
{ 
  public static final int FIELD = 1102; 

  public TriggerPrice() 
  { 
    super(1102);
  } 
  public TriggerPrice(double data) 
  { 
    super(1102, data);
  } 
} 
