package quickfix.field; 
import quickfix.DoubleField; 
import java.util.Date; 

public class MinQty extends DoubleField 
{ 
  public static final int FIELD = 110; 

  public MinQty() 
  { 
    super(110);
  } 
  public MinQty(double data) 
  { 
    super(110, data);
  } 
} 
