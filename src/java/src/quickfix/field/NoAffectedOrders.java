package quickfix.field; 
import quickfix.IntField; 
import java.util.Date; 

public class NoAffectedOrders extends IntField 
{ 
  public static final int FIELD = 534; 

  public NoAffectedOrders() 
  { 
    super(534);
  } 
  public NoAffectedOrders(int data) 
  { 
    super(534, data);
  } 
} 
