package quickfix.field; 
import quickfix.StringField; 
import java.util.Date; 

public class SenderSubID extends StringField 
{ 
  public static final int FIELD = 50; 

  public SenderSubID() 
  { 
    super(50);
  } 
  public SenderSubID(String data) 
  { 
    super(50, data);
  } 
} 
