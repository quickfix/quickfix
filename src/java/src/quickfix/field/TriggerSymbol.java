package quickfix.field; 
import quickfix.StringField; 
import java.util.Date; 

public class TriggerSymbol extends StringField 
{ 
  public static final int FIELD = 1103; 

  public TriggerSymbol() 
  { 
    super(1103);
  } 
  public TriggerSymbol(String data) 
  { 
    super(1103, data);
  } 
} 
