package quickfix.field; 
import quickfix.StringField; 
import java.util.Date; 

public class TrdMatchID extends StringField 
{ 
  public static final int FIELD = 880; 

  public TrdMatchID() 
  { 
    super(880);
  } 
  public TrdMatchID(String data) 
  { 
    super(880, data);
  } 
} 
