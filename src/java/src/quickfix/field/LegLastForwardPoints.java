package quickfix.field; 
import quickfix.DoubleField; 
import java.util.Date; 

public class LegLastForwardPoints extends DoubleField 
{ 
  public static final int FIELD = 1073; 

  public LegLastForwardPoints() 
  { 
    super(1073);
  } 
  public LegLastForwardPoints(double data) 
  { 
    super(1073, data);
  } 
} 
