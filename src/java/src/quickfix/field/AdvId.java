package quickfix.field; 
import quickfix.StringField; 
import java.util.Date; 

public class AdvId extends StringField 
{ 
  public static final int FIELD = 2; 

  public AdvId() 
  { 
    super(2);
  } 
  public AdvId(String data) 
  { 
    super(2, data);
  } 
} 
