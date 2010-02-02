package quickfix.field; 
import quickfix.StringField; 
import java.util.Date; 

public class PegSecurityID extends StringField 
{ 
  public static final int FIELD = 1097; 

  public PegSecurityID() 
  { 
    super(1097);
  } 
  public PegSecurityID(String data) 
  { 
    super(1097, data);
  } 
} 
