package quickfix.field; 
import quickfix.StringField; 
import java.util.Date; 

public class SideTradeReportID extends StringField 
{ 
  public static final int FIELD = 1005; 

  public SideTradeReportID() 
  { 
    super(1005);
  } 
  public SideTradeReportID(String data) 
  { 
    super(1005, data);
  } 
} 
