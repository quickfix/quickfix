package quickfix.field; 
import quickfix.StringField; 
import java.util.Date; 

public class SecuritySettlAgentContactName extends StringField 
{ 
  public static final int FIELD = 180; 

  public SecuritySettlAgentContactName() 
  { 
    super(180);
  } 
  public SecuritySettlAgentContactName(String data) 
  { 
    super(180, data);
  } 
} 
