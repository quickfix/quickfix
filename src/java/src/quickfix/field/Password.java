package quickfix.field; 
import quickfix.StringField; 
import java.util.Date; 

public class Password extends StringField 
{ 
  public static final int FIELD = 554; 

  public Password() 
  { 
    super(554);
  } 
  public Password(String data) 
  { 
    super(554, data);
  } 
} 
