package quickfix.field; 
import quickfix.UtcTimeOnlyField; 
import java.util.Date; 

public class MDEntryTime extends UtcTimeOnlyField 
{ 
  public static final int FIELD = 273; 

  public MDEntryTime() 
  { 
    super(273);
  } 
  public MDEntryTime(Date data) 
  { 
    super(273, data);
  } 
} 
