package quickfix.field; 
import quickfix.DoubleField; 
import java.util.Date; 

public class SettlCurrBidFxRate extends DoubleField 
{ 
  public static final int FIELD = 656; 

  public SettlCurrBidFxRate() 
  { 
    super(656);
  } 
  public SettlCurrBidFxRate(double data) 
  { 
    super(656, data);
  } 
} 
