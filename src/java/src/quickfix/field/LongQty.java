package quickfix.field; 
import quickfix.DoubleField; 
import java.util.Date; 

public class LongQty extends DoubleField 
{ 
  public static final int FIELD = 704; 

  public LongQty() 
  { 
    super(704);
  } 
  public LongQty(double data) 
  { 
    super(704, data);
  } 
} 
