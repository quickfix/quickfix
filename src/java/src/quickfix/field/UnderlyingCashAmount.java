package quickfix.field; 
import quickfix.DoubleField; 
import java.util.Date; 

public class UnderlyingCashAmount extends DoubleField 
{ 
  public static final int FIELD = 973; 

  public UnderlyingCashAmount() 
  { 
    super(973);
  } 
  public UnderlyingCashAmount(double data) 
  { 
    super(973, data);
  } 
} 
