package quickfix.field; 
import quickfix.DoubleField; 
import java.util.Date; 

public class UnderlyingLastQty extends DoubleField 
{ 
  public static final int FIELD = 652; 

  public UnderlyingLastQty() 
  { 
    super(652);
  } 
  public UnderlyingLastQty(double data) 
  { 
    super(652, data);
  } 
} 
