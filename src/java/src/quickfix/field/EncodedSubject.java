package quickfix.field; 
import quickfix.StringField; 
import java.util.Date; 

public class EncodedSubject extends StringField 
{ 
  public static final int FIELD = 357; 

  public EncodedSubject() 
  { 
    super(357);
  } 
  public EncodedSubject(String data) 
  { 
    super(357, data);
  } 
} 
