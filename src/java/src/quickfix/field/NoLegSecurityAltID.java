package quickfix.field; 
import quickfix.StringField; 
import java.util.Date; 

public class NoLegSecurityAltID extends StringField 
{ 
  public static final int FIELD = 604; 

  public NoLegSecurityAltID() 
  { 
    super(604);
  } 
  public NoLegSecurityAltID(String data) 
  { 
    super(604, data);
  } 
} 
