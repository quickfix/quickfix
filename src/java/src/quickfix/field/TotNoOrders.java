package quickfix.field; 
import quickfix.IntField; 
import java.util.Date; 

public class TotNoOrders extends IntField 
{ 
  public static final int FIELD = 68; 

  public TotNoOrders() 
  { 
    super(68);
  } 
  public TotNoOrders(int data) 
  { 
    super(68, data);
  } 
} 
