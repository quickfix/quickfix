package quickfix.field; 
import quickfix.DoubleField; 
import java.util.Date; 

public class OrderQty2 extends DoubleField 
{ 
  public static final int FIELD = 192; 

  public OrderQty2() 
  { 
    super(192);
  } 
  public OrderQty2(double data) 
  { 
    super(192, data);
  } 
} 
