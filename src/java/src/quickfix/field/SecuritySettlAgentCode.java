package quickfix.field; 
import quickfix.StringField; 
import java.util.Date; 

public class SecuritySettlAgentCode extends StringField 
{ 
  public static final int FIELD = 177; 

  public SecuritySettlAgentCode() 
  { 
    super(177);
  } 
  public SecuritySettlAgentCode(String data) 
  { 
    super(177, data);
  } 
} 
