package quickfix.field; 
import quickfix.StringField; 
import java.util.Date; 

public class ListStatusText extends StringField 
{ 
  public static final int FIELD = 444; 

  public ListStatusText() 
  { 
    super(444);
  } 
  public ListStatusText(String data) 
  { 
    super(444, data);
  } 
} 
