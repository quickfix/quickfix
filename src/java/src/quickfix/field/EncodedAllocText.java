package quickfix.field; 
import quickfix.StringField; 
import java.util.Date; 

public class EncodedAllocText extends StringField 
{ 
  public static final int FIELD = 361; 

  public EncodedAllocText() 
  { 
    super(361);
  } 
  public EncodedAllocText(String data) 
  { 
    super(361, data);
  } 
} 
