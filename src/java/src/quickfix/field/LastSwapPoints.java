package quickfix.field; 
import quickfix.DoubleField; 
import java.util.Date; 

public class LastSwapPoints extends DoubleField 
{ 
  public static final int FIELD = 1071; 

  public LastSwapPoints() 
  { 
    super(1071);
  } 
  public LastSwapPoints(double data) 
  { 
    super(1071, data);
  } 
} 
