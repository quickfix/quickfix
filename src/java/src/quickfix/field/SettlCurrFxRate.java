package quickfix.field; 
import quickfix.DoubleField; 
import java.util.Date; 

public class SettlCurrFxRate extends DoubleField 
{ 
  public static final int FIELD = 155; 

  public SettlCurrFxRate() 
  { 
    super(155);
  } 
  public SettlCurrFxRate(double data) 
  { 
    super(155, data);
  } 
} 
