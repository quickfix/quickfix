package quickfix.field; 
import quickfix.StringField; 
import java.util.Date; 

public class AllocReportRefID extends StringField 
{ 
  public static final int FIELD = 795; 

  public AllocReportRefID() 
  { 
    super(795);
  } 
  public AllocReportRefID(String data) 
  { 
    super(795, data);
  } 
} 
