package quickfix.field; 
import quickfix.StringField; 
import java.util.Date; 

public class SettlInstMsgID extends StringField 
{ 
  public static final int FIELD = 777; 

  public SettlInstMsgID() 
  { 
    super(777);
  } 
  public SettlInstMsgID(String data) 
  { 
    super(777, data);
  } 
} 
