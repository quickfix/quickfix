package quickfix.field; 
import quickfix.StringField; 
import java.util.Date; 

public class OnBehalfOfLocationID extends StringField 
{ 
  public static final int FIELD = 144; 

  public OnBehalfOfLocationID() 
  { 
    super(144);
  } 
  public OnBehalfOfLocationID(String data) 
  { 
    super(144, data);
  } 
} 
