package quickfix.field; 
import quickfix.StringField; 
import java.util.Date; 

public class CashDistribAgentAcctName extends StringField 
{ 
  public static final int FIELD = 502; 

  public CashDistribAgentAcctName() 
  { 
    super(502);
  } 
  public CashDistribAgentAcctName(String data) 
  { 
    super(502, data);
  } 
} 
