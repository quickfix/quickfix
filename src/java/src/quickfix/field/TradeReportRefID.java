package quickfix.field; 
import quickfix.StringField; 
import java.util.Date; 

public class TradeReportRefID extends StringField 
{ 
  public static final int FIELD = 572; 

  public TradeReportRefID() 
  { 
    super(572);
  } 
  public TradeReportRefID(String data) 
  { 
    super(572, data);
  } 
} 
