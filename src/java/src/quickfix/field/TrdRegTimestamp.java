package quickfix.field; 
import quickfix.UtcTimeStampField; 
import java.util.Date; 

public class TrdRegTimestamp extends UtcTimeStampField 
{ 
  public static final int FIELD = 769; 

  public TrdRegTimestamp() 
  { 
    super(769);
  } 
  public TrdRegTimestamp(Date data) 
  { 
    super(769, data);
  } 
} 
