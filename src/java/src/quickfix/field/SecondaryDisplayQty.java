package quickfix.field; 
import quickfix.DoubleField; 
import java.util.Date; 

public class SecondaryDisplayQty extends DoubleField 
{ 
  public static final int FIELD = 1082; 

  public SecondaryDisplayQty() 
  { 
    super(1082);
  } 
  public SecondaryDisplayQty(double data) 
  { 
    super(1082, data);
  } 
} 
