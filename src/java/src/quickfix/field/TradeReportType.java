package quickfix.field; 
import quickfix.IntField; 
import java.util.Date; 

public class TradeReportType extends IntField 
{ 
  public static final int FIELD = 856; 
public static final int SUBMIT = 0; 
public static final int ALLEGED = 1; 
public static final int ACCEPT = 2; 
public static final int DECLINE = 3; 
public static final int ADDENDUM = 4; 
public static final int NO_WAS = 5; 
public static final int TRADE_REPORT_CANCEL = 6; 
public static final int LOCKED_IN_TRADE_BREAK = 7; 

  public TradeReportType() 
  { 
    super(856);
  } 
  public TradeReportType(int data) 
  { 
    super(856, data);
  } 
} 
