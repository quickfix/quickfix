package quickfix.field; 
import quickfix.DoubleField; 
import java.util.Date; 

public class LegGrossTradeAmt extends DoubleField 
{ 
  public static final int FIELD = 1075; 

  public LegGrossTradeAmt() 
  { 
    super(1075);
  } 
  public LegGrossTradeAmt(double data) 
  { 
    super(1075, data);
  } 
} 
