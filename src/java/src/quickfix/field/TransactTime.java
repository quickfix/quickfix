package quickfix.field; 
import quickfix.UtcTimeStampField; 
import java.util.Date; 

public class TransactTime extends UtcTimeStampField 
{ 
  public static final int FIELD = 60; 

  public TransactTime() 
  { 
    super(60);
  } 
  public TransactTime(Date data) 
  { 
    super(60, data);
  } 
} 
