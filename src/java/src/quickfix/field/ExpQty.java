package quickfix.field; 
import quickfix.DoubleField; 
import java.util.Date; 

public class ExpQty extends DoubleField 
{ 
  public static final int FIELD = 983; 

  public ExpQty() 
  { 
    super(983);
  } 
  public ExpQty(double data) 
  { 
    super(983, data);
  } 
} 
