package quickfix.field; 
import quickfix.StringField; 
import java.util.Date; 

public class SettlInstRefID extends StringField 
{ 
  public static final int FIELD = 214; 

  public SettlInstRefID() 
  { 
    super(214);
  } 
  public SettlInstRefID(String data) 
  { 
    super(214, data);
  } 
} 
