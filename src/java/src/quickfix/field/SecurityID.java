package quickfix.field; 
import quickfix.StringField; 
import java.util.Date; 

public class SecurityID extends StringField 
{ 
  public static final int FIELD = 48; 

  public SecurityID() 
  { 
    super(48);
  } 
  public SecurityID(String data) 
  { 
    super(48, data);
  } 
} 
