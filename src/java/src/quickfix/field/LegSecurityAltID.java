package quickfix.field; 
import quickfix.StringField; 
import java.util.Date; 

public class LegSecurityAltID extends StringField 
{ 
  public static final int FIELD = 605; 

  public LegSecurityAltID() 
  { 
    super(605);
  } 
  public LegSecurityAltID(String data) 
  { 
    super(605, data);
  } 
} 
