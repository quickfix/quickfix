package quickfix.field; 
import quickfix.DoubleField; 
import java.util.Date; 

public class LastForwardPoints2 extends DoubleField 
{ 
  public static final int FIELD = 641; 

  public LastForwardPoints2() 
  { 
    super(641);
  } 
  public LastForwardPoints2(double data) 
  { 
    super(641, data);
  } 
} 
