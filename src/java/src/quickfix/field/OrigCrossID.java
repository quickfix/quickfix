package quickfix.field; 
import quickfix.StringField; 
import java.util.Date; 

public class OrigCrossID extends StringField 
{ 
  public static final int FIELD = 551; 

  public OrigCrossID() 
  { 
    super(551);
  } 
  public OrigCrossID(String data) 
  { 
    super(551, data);
  } 
} 
