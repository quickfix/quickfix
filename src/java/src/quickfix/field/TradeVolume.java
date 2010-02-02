package quickfix.field; 
import quickfix.DoubleField; 
import java.util.Date; 

public class TradeVolume extends DoubleField 
{ 
  public static final int FIELD = 1020; 

  public TradeVolume() 
  { 
    super(1020);
  } 
  public TradeVolume(double data) 
  { 
    super(1020, data);
  } 
} 
