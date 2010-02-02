package quickfix.field; 
import quickfix.StringField; 
import java.util.Date; 

public class UnderlyingSettlementStatus extends StringField 
{ 
  public static final int FIELD = 988; 

  public UnderlyingSettlementStatus() 
  { 
    super(988);
  } 
  public UnderlyingSettlementStatus(String data) 
  { 
    super(988, data);
  } 
} 
