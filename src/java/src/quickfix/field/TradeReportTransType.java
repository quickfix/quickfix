package quickfix.field; 
import quickfix.IntField; 
import java.util.Date; 

public class TradeReportTransType extends IntField 
{ 
  public static final int FIELD = 487; 
public static final int NEW = 0; 
public static final int CANCEL = 1; 
public static final int REPLACE = 2; 
public static final int RELEASE = 3; 
public static final int REVERSE = 4; 

  public TradeReportTransType() 
  { 
    super(487);
  } 
  public TradeReportTransType(int data) 
  { 
    super(487, data);
  } 
} 
