package quickfix.field; 
import quickfix.StringField; 
import java.util.Date; 

public class CashDistribAgentName extends StringField 
{ 
  public static final int FIELD = 498; 

  public CashDistribAgentName() 
  { 
    super(498);
  } 
  public CashDistribAgentName(String data) 
  { 
    super(498, data);
  } 
} 
