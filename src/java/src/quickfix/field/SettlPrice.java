package quickfix.field; 
import quickfix.DoubleField; 
import java.util.Date; 

public class SettlPrice extends DoubleField 
{ 
  public static final int FIELD = 730; 

  public SettlPrice() 
  { 
    super(730);
  } 
  public SettlPrice(double data) 
  { 
    super(730, data);
  } 
} 
