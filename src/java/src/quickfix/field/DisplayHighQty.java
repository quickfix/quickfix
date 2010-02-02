package quickfix.field; 
import quickfix.DoubleField; 
import java.util.Date; 

public class DisplayHighQty extends DoubleField 
{ 
  public static final int FIELD = 1086; 

  public DisplayHighQty() 
  { 
    super(1086);
  } 
  public DisplayHighQty(double data) 
  { 
    super(1086, data);
  } 
} 
