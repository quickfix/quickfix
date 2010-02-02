package quickfix.field; 
import quickfix.DoubleField; 
import java.util.Date; 

public class SwapPoints extends DoubleField 
{ 
  public static final int FIELD = 1069; 

  public SwapPoints() 
  { 
    super(1069);
  } 
  public SwapPoints(double data) 
  { 
    super(1069, data);
  } 
} 
