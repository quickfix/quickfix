package quickfix.field; 
import quickfix.IntField; 
import java.util.Date; 

public class NoOrders extends IntField 
{ 
  public static final int FIELD = 73; 

  public NoOrders() 
  { 
    super(73);
  } 
  public NoOrders(int data) 
  { 
    super(73, data);
  } 
} 
