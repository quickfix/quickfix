package quickfix.field; 
import quickfix.BooleanField; 
import java.util.Date; 

public class NotifyBrokerOfCredit extends BooleanField 
{ 
  public static final int FIELD = 208; 

  public NotifyBrokerOfCredit() 
  { 
    super(208);
  } 
  public NotifyBrokerOfCredit(boolean data) 
  { 
    super(208, data);
  } 
} 
