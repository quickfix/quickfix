package quickfix.field; 
import quickfix.StringField; 
import java.util.Date; 

public class LegRefID extends StringField 
{ 
  public static final int FIELD = 654; 

  public LegRefID() 
  { 
    super(654);
  } 
  public LegRefID(String data) 
  { 
    super(654, data);
  } 
} 
