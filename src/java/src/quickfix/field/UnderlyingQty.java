package quickfix.field; 
import quickfix.DoubleField; 
import java.util.Date; 

public class UnderlyingQty extends DoubleField 
{ 
  public static final int FIELD = 879; 

  public UnderlyingQty() 
  { 
    super(879);
  } 
  public UnderlyingQty(double data) 
  { 
    super(879, data);
  } 
} 
