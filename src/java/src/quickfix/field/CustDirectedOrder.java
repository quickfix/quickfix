package quickfix.field; 
import quickfix.BooleanField; 
import java.util.Date; 

public class CustDirectedOrder extends BooleanField 
{ 
  public static final int FIELD = 1029; 

  public CustDirectedOrder() 
  { 
    super(1029);
  } 
  public CustDirectedOrder(boolean data) 
  { 
    super(1029, data);
  } 
} 
