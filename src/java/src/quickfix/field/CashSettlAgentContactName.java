package quickfix.field; 
import quickfix.StringField; 
import java.util.Date; 

public class CashSettlAgentContactName extends StringField 
{ 
  public static final int FIELD = 186; 

  public CashSettlAgentContactName() 
  { 
    super(186);
  } 
  public CashSettlAgentContactName(String data) 
  { 
    super(186, data);
  } 
} 
