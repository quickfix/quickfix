package quickfix.field; 
import quickfix.StringField; 
import java.util.Date; 

public class TriggerSecurityDesc extends StringField 
{ 
  public static final int FIELD = 1106; 

  public TriggerSecurityDesc() 
  { 
    super(1106);
  } 
  public TriggerSecurityDesc(String data) 
  { 
    super(1106, data);
  } 
} 
