package quickfix.field; 
import quickfix.StringField; 
import java.util.Date; 

public class CashSettlAgentName extends StringField 
{ 
  public static final int FIELD = 182; 

  public CashSettlAgentName() 
  { 
    super(182);
  } 
  public CashSettlAgentName(String data) 
  { 
    super(182, data);
  } 
} 
