package quickfix.field; 
import quickfix.StringField; 
import java.util.Date; 

public class SideTrdRegTimestampSrc extends StringField 
{ 
  public static final int FIELD = 1014; 

  public SideTrdRegTimestampSrc() 
  { 
    super(1014);
  } 
  public SideTrdRegTimestampSrc(String data) 
  { 
    super(1014, data);
  } 
} 
