package quickfix.field; 
import quickfix.StringField; 
import java.util.Date; 

public class LegSettlCurrency extends StringField 
{ 
  public static final int FIELD = 675; 

  public LegSettlCurrency() 
  { 
    super(675);
  } 
  public LegSettlCurrency(String data) 
  { 
    super(675, data);
  } 
} 
