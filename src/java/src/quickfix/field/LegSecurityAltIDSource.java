package quickfix.field; 
import quickfix.StringField; 
import java.util.Date; 

public class LegSecurityAltIDSource extends StringField 
{ 
  public static final int FIELD = 606; 

  public LegSecurityAltIDSource() 
  { 
    super(606);
  } 
  public LegSecurityAltIDSource(String data) 
  { 
    super(606, data);
  } 
} 
