package quickfix.field; 
import quickfix.StringField; 
import java.util.Date; 

public class BrokerOfCredit extends StringField 
{ 
  public static final int FIELD = 92; 

  public BrokerOfCredit() 
  { 
    super(92);
  } 
  public BrokerOfCredit(String data) 
  { 
    super(92, data);
  } 
} 
