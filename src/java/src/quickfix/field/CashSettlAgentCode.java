package quickfix.field; 
import quickfix.StringField; 
import java.util.Date; 

public class CashSettlAgentCode extends StringField 
{ 
  public static final int FIELD = 183; 

  public CashSettlAgentCode() 
  { 
    super(183);
  } 
  public CashSettlAgentCode(String data) 
  { 
    super(183, data);
  } 
} 
