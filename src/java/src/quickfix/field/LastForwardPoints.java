package quickfix.field; 
import quickfix.DoubleField; 
import java.util.Date; 

public class LastForwardPoints extends DoubleField 
{ 
  public static final int FIELD = 195; 

  public LastForwardPoints() 
  { 
    super(195);
  } 
  public LastForwardPoints(double data) 
  { 
    super(195, data);
  } 
} 
