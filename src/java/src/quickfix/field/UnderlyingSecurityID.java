package quickfix.field; 
import quickfix.StringField; 
import java.util.Date; 

public class UnderlyingSecurityID extends StringField 
{ 
  public static final int FIELD = 309; 

  public UnderlyingSecurityID() 
  { 
    super(309);
  } 
  public UnderlyingSecurityID(String data) 
  { 
    super(309, data);
  } 
} 
