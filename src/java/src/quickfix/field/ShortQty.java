package quickfix.field; 
import quickfix.DoubleField; 
import java.util.Date; 

public class ShortQty extends DoubleField 
{ 
  public static final int FIELD = 705; 

  public ShortQty() 
  { 
    super(705);
  } 
  public ShortQty(double data) 
  { 
    super(705, data);
  } 
} 
