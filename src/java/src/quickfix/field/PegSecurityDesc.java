package quickfix.field; 
import quickfix.StringField; 
import java.util.Date; 

public class PegSecurityDesc extends StringField 
{ 
  public static final int FIELD = 1099; 

  public PegSecurityDesc() 
  { 
    super(1099);
  } 
  public PegSecurityDesc(String data) 
  { 
    super(1099, data);
  } 
} 
