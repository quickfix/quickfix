package quickfix.field; 
import quickfix.StringField; 
import java.util.Date; 

public class UnderlyingSecurityAltID extends StringField 
{ 
  public static final int FIELD = 458; 

  public UnderlyingSecurityAltID() 
  { 
    super(458);
  } 
  public UnderlyingSecurityAltID(String data) 
  { 
    super(458, data);
  } 
} 
