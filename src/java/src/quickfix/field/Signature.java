package quickfix.field; 
import quickfix.StringField; 
import java.util.Date; 

public class Signature extends StringField 
{ 
  public static final int FIELD = 89; 

  public Signature() 
  { 
    super(89);
  } 
  public Signature(String data) 
  { 
    super(89, data);
  } 
} 
