package quickfix.field; 
import quickfix.StringField; 
import java.util.Date; 

public class LegSettlDate extends StringField 
{ 
  public static final int FIELD = 588; 

  public LegSettlDate() 
  { 
    super(588);
  } 
  public LegSettlDate(String data) 
  { 
    super(588, data);
  } 
} 
