package quickfix.field; 
import quickfix.DoubleField; 
import java.util.Date; 

public class EventPx extends DoubleField 
{ 
  public static final int FIELD = 867; 

  public EventPx() 
  { 
    super(867);
  } 
  public EventPx(double data) 
  { 
    super(867, data);
  } 
} 
