package quickfix.field; 
import quickfix.StringField; 
import java.util.Date; 

public class SecuritySubType extends StringField 
{ 
  public static final int FIELD = 762; 

  public SecuritySubType() 
  { 
    super(762);
  } 
  public SecuritySubType(String data) 
  { 
    super(762, data);
  } 
} 
