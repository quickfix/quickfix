package quickfix.field; 
import quickfix.StringField; 
import java.util.Date; 

public class UnderlyingSecurityAltIDSource extends StringField 
{ 
  public static final int FIELD = 459; 

  public UnderlyingSecurityAltIDSource() 
  { 
    super(459);
  } 
  public UnderlyingSecurityAltIDSource(String data) 
  { 
    super(459, data);
  } 
} 
