package quickfix.field; 
import quickfix.StringField; 
import java.util.Date; 

public class RegistRefID extends StringField 
{ 
  public static final int FIELD = 508; 

  public RegistRefID() 
  { 
    super(508);
  } 
  public RegistRefID(String data) 
  { 
    super(508, data);
  } 
} 
