package quickfix.field; 
import quickfix.BooleanField; 
import java.util.Date; 

public class TradedFlatSwitch extends BooleanField 
{ 
  public static final int FIELD = 258; 

  public TradedFlatSwitch() 
  { 
    super(258);
  } 
  public TradedFlatSwitch(boolean data) 
  { 
    super(258, data);
  } 
} 
