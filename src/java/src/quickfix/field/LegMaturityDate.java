package quickfix.field; 
import quickfix.StringField; 
import java.util.Date; 

public class LegMaturityDate extends StringField 
{ 
  public static final int FIELD = 611; 

  public LegMaturityDate() 
  { 
    super(611);
  } 
  public LegMaturityDate(String data) 
  { 
    super(611, data);
  } 
} 
