package quickfix.field; 
import quickfix.UtcTimeStampField; 
import java.util.Date; 

public class TradSesPreCloseTime extends UtcTimeStampField 
{ 
  public static final int FIELD = 343; 

  public TradSesPreCloseTime() 
  { 
    super(343);
  } 
  public TradSesPreCloseTime(Date data) 
  { 
    super(343, data);
  } 
} 
