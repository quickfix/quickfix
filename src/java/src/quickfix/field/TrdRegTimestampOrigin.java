package quickfix.field; 
import quickfix.StringField; 
import java.util.Date; 

public class TrdRegTimestampOrigin extends StringField 
{ 
  public static final int FIELD = 771; 

  public TrdRegTimestampOrigin() 
  { 
    super(771);
  } 
  public TrdRegTimestampOrigin(String data) 
  { 
    super(771, data);
  } 
} 
