package quickfix.field; 
import quickfix.DoubleField; 
import java.util.Date; 

public class NetChgPrevDay extends DoubleField 
{ 
  public static final int FIELD = 451; 

  public NetChgPrevDay() 
  { 
    super(451);
  } 
  public NetChgPrevDay(double data) 
  { 
    super(451, data);
  } 
} 
