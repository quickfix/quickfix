package quickfix.field; 
import quickfix.StringField; 
import java.util.Date; 

public class BeginString extends StringField 
{ 
  public static final int FIELD = 8; 

  public BeginString() 
  { 
    super(8);
  } 
  public BeginString(String data) 
  { 
    super(8, data);
  } 
} 
