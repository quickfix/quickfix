package quickfix.field; 
import quickfix.IntField; 
import java.util.Date; 

public class NumberOfOrders extends IntField 
{ 
  public static final int FIELD = 346; 

  public NumberOfOrders() 
  { 
    super(346);
  } 
  public NumberOfOrders(int data) 
  { 
    super(346, data);
  } 
} 
