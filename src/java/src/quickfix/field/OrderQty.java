package quickfix.field; 
import quickfix.DoubleField; 
import java.util.Date; 

public class OrderQty extends DoubleField 
{ 
  public static final int FIELD = 38; 

  public OrderQty() 
  { 
    super(38);
  } 
  public OrderQty(double data) 
  { 
    super(38, data);
  } 
} 
