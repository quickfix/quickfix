package quickfix.field; 
import quickfix.StringField; 
import java.util.Date; 

public class AllocReportID extends StringField 
{ 
  public static final int FIELD = 755; 

  public AllocReportID() 
  { 
    super(755);
  } 
  public AllocReportID(String data) 
  { 
    super(755, data);
  } 
} 
