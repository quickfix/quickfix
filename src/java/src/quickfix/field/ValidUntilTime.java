package quickfix.field; 
import quickfix.UtcTimeStampField; 
import java.util.Date; 

public class ValidUntilTime extends UtcTimeStampField 
{ 
  public static final int FIELD = 62; 

  public ValidUntilTime() 
  { 
    super(62);
  } 
  public ValidUntilTime(Date data) 
  { 
    super(62, data);
  } 
} 
