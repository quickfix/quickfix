package quickfix.field; 
import quickfix.DoubleField; 
import java.util.Date; 

public class SettlCurrAmt extends DoubleField 
{ 
  public static final int FIELD = 119; 

  public SettlCurrAmt() 
  { 
    super(119);
  } 
  public SettlCurrAmt(double data) 
  { 
    super(119, data);
  } 
} 
