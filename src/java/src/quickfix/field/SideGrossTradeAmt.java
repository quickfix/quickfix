package quickfix.field; 
import quickfix.DoubleField; 
import java.util.Date; 

public class SideGrossTradeAmt extends DoubleField 
{ 
  public static final int FIELD = 1072; 

  public SideGrossTradeAmt() 
  { 
    super(1072);
  } 
  public SideGrossTradeAmt(double data) 
  { 
    super(1072, data);
  } 
} 
