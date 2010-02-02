package quickfix.field; 
import quickfix.DoubleField; 
import java.util.Date; 

public class UnderlyingPayAmount extends DoubleField 
{ 
  public static final int FIELD = 985; 

  public UnderlyingPayAmount() 
  { 
    super(985);
  } 
  public UnderlyingPayAmount(double data) 
  { 
    super(985, data);
  } 
} 
