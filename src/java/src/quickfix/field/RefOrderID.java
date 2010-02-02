package quickfix.field; 
import quickfix.StringField; 
import java.util.Date; 

public class RefOrderID extends StringField 
{ 
  public static final int FIELD = 1080; 

  public RefOrderID() 
  { 
    super(1080);
  } 
  public RefOrderID(String data) 
  { 
    super(1080, data);
  } 
} 
