package quickfix.field; 
import quickfix.StringField; 
import java.util.Date; 

public class ConfirmRefID extends StringField 
{ 
  public static final int FIELD = 772; 

  public ConfirmRefID() 
  { 
    super(772);
  } 
  public ConfirmRefID(String data) 
  { 
    super(772, data);
  } 
} 
