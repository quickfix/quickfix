package quickfix.field; 
import quickfix.DoubleField; 
import java.util.Date; 

public class StrikeMultiplier extends DoubleField 
{ 
  public static final int FIELD = 967; 

  public StrikeMultiplier() 
  { 
    super(967);
  } 
  public StrikeMultiplier(double data) 
  { 
    super(967, data);
  } 
} 
