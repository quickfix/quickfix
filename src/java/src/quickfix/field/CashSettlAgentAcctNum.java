package quickfix.field; 
import quickfix.StringField; 
import java.util.Date; 

public class CashSettlAgentAcctNum extends StringField 
{ 
  public static final int FIELD = 184; 

  public CashSettlAgentAcctNum() 
  { 
    super(184);
  } 
  public CashSettlAgentAcctNum(String data) 
  { 
    super(184, data);
  } 
} 
