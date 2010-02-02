package quickfix.field; 
import quickfix.DoubleField; 
import java.util.Date; 

public class LegCalculatedCcyLastQty extends DoubleField 
{ 
  public static final int FIELD = 1074; 

  public LegCalculatedCcyLastQty() 
  { 
    super(1074);
  } 
  public LegCalculatedCcyLastQty(double data) 
  { 
    super(1074, data);
  } 
} 
