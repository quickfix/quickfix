package quickfix.field; 
import quickfix.IntField; 
import java.util.Date; 

public class SideQty extends IntField 
{ 
  public static final int FIELD = 1009; 

  public SideQty() 
  { 
    super(1009);
  } 
  public SideQty(int data) 
  { 
    super(1009, data);
  } 
} 
