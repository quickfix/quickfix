package quickfix.field; 
import quickfix.StringField; 
import java.util.Date; 

public class RefMsgType extends StringField 
{ 
  public static final int FIELD = 372; 

  public RefMsgType() 
  { 
    super(372);
  } 
  public RefMsgType(String data) 
  { 
    super(372, data);
  } 
} 
