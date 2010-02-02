package quickfix.field; 
import quickfix.StringField; 
import java.util.Date; 

public class TriggerSecurityID extends StringField 
{ 
  public static final int FIELD = 1104; 

  public TriggerSecurityID() 
  { 
    super(1104);
  } 
  public TriggerSecurityID(String data) 
  { 
    super(1104, data);
  } 
} 
