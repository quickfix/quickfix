package quickfix.field; 
import quickfix.StringField; 
import java.util.Date; 

public class EncodedListStatusText extends StringField 
{ 
  public static final int FIELD = 446; 

  public EncodedListStatusText() 
  { 
    super(446);
  } 
  public EncodedListStatusText(String data) 
  { 
    super(446, data);
  } 
} 
