package quickfix.field; 
import quickfix.StringField; 
import java.util.Date; 

public class SecurityResponseID extends StringField 
{ 
  public static final int FIELD = 322; 

  public SecurityResponseID() 
  { 
    super(322);
  } 
  public SecurityResponseID(String data) 
  { 
    super(322, data);
  } 
} 
