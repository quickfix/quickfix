package quickfix.field; 
import quickfix.StringField; 
import java.util.Date; 

public class ConfirmID extends StringField 
{ 
  public static final int FIELD = 664; 

  public ConfirmID() 
  { 
    super(664);
  } 
  public ConfirmID(String data) 
  { 
    super(664, data);
  } 
} 
