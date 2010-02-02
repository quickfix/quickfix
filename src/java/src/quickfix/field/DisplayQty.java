package quickfix.field; 
import quickfix.DoubleField; 
import java.util.Date; 

public class DisplayQty extends DoubleField 
{ 
  public static final int FIELD = 1138; 

  public DisplayQty() 
  { 
    super(1138);
  } 
  public DisplayQty(double data) 
  { 
    super(1138, data);
  } 
} 
