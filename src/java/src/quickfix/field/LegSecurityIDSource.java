package quickfix.field; 
import quickfix.StringField; 
import java.util.Date; 

public class LegSecurityIDSource extends StringField 
{ 
  public static final int FIELD = 603; 

  public LegSecurityIDSource() 
  { 
    super(603);
  } 
  public LegSecurityIDSource(String data) 
  { 
    super(603, data);
  } 
} 
