package quickfix.field; 
import quickfix.UtcTimeStampField; 
import java.util.Date; 

public class TradSesEndTime extends UtcTimeStampField 
{ 
  public static final int FIELD = 345; 

  public TradSesEndTime() 
  { 
    super(345);
  } 
  public TradSesEndTime(Date data) 
  { 
    super(345, data);
  } 
} 
