package quickfix.field; 
import quickfix.StringField; 
import java.util.Date; 

public class CashDistribAgentAcctNumber extends StringField 
{ 
  public static final int FIELD = 500; 

  public CashDistribAgentAcctNumber() 
  { 
    super(500);
  } 
  public CashDistribAgentAcctNumber(String data) 
  { 
    super(500, data);
  } 
} 
