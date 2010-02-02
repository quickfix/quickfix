package quickfix.field; 
import quickfix.StringField; 
import java.util.Date; 

public class LegReportID extends StringField 
{ 
  public static final int FIELD = 990; 

  public LegReportID() 
  { 
    super(990);
  } 
  public LegReportID(String data) 
  { 
    super(990, data);
  } 
} 
