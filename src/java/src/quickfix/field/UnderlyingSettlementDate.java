package quickfix.field; 
import quickfix.StringField; 
import java.util.Date; 

public class UnderlyingSettlementDate extends StringField 
{ 
  public static final int FIELD = 987; 

  public UnderlyingSettlementDate() 
  { 
    super(987);
  } 
  public UnderlyingSettlementDate(String data) 
  { 
    super(987, data);
  } 
} 
