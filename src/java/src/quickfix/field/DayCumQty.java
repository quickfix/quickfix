package quickfix.field; 
import quickfix.DoubleField; 
import java.util.Date; 

public class DayCumQty extends DoubleField 
{ 
  public static final int FIELD = 425; 

  public DayCumQty() 
  { 
    super(425);
  } 
  public DayCumQty(double data) 
  { 
    super(425, data);
  } 
} 
