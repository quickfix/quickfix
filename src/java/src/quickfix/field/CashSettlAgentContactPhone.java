package quickfix.field; 
import quickfix.StringField; 
import java.util.Date; 

public class CashSettlAgentContactPhone extends StringField 
{ 
  public static final int FIELD = 187; 

  public CashSettlAgentContactPhone() 
  { 
    super(187);
  } 
  public CashSettlAgentContactPhone(String data) 
  { 
    super(187, data);
  } 
} 
