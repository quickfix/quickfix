package quickfix.field; 
import quickfix.StringField; 
import java.util.Date; 

public class RegistAcctType extends StringField 
{ 
  public static final int FIELD = 493; 

  public RegistAcctType() 
  { 
    super(493);
  } 
  public RegistAcctType(String data) 
  { 
    super(493, data);
  } 
} 
