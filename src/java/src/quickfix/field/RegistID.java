package quickfix.field; 
import quickfix.StringField; 
import java.util.Date; 

public class RegistID extends StringField 
{ 
  public static final int FIELD = 513; 

  public RegistID() 
  { 
    super(513);
  } 
  public RegistID(String data) 
  { 
    super(513, data);
  } 
} 
