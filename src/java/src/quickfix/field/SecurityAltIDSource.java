package quickfix.field; 
import quickfix.StringField; 
import java.util.Date; 

public class SecurityAltIDSource extends StringField 
{ 
  public static final int FIELD = 456; 

  public SecurityAltIDSource() 
  { 
    super(456);
  } 
  public SecurityAltIDSource(String data) 
  { 
    super(456, data);
  } 
} 
