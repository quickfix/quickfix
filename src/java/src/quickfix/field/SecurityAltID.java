package quickfix.field; 
import quickfix.StringField; 
import java.util.Date; 

public class SecurityAltID extends StringField 
{ 
  public static final int FIELD = 455; 

  public SecurityAltID() 
  { 
    super(455);
  } 
  public SecurityAltID(String data) 
  { 
    super(455, data);
  } 
} 
