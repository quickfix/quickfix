package quickfix.field; 
import quickfix.StringField; 
import java.util.Date; 

public class LegSecurityType extends StringField 
{ 
  public static final int FIELD = 609; 

  public LegSecurityType() 
  { 
    super(609);
  } 
  public LegSecurityType(String data) 
  { 
    super(609, data);
  } 
} 
