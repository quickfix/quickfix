package quickfix.field; 
import quickfix.DoubleField; 
import java.util.Date; 

public class TriggerNewQty extends DoubleField 
{ 
  public static final int FIELD = 1112; 

  public TriggerNewQty() 
  { 
    super(1112);
  } 
  public TriggerNewQty(double data) 
  { 
    super(1112, data);
  } 
} 
