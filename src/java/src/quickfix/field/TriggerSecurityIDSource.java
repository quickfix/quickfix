package quickfix.field; 
import quickfix.StringField; 
import java.util.Date; 

public class TriggerSecurityIDSource extends StringField 
{ 
  public static final int FIELD = 1105; 

  public TriggerSecurityIDSource() 
  { 
    super(1105);
  } 
  public TriggerSecurityIDSource(String data) 
  { 
    super(1105, data);
  } 
} 
