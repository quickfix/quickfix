package quickfix.field; 
import quickfix.DoubleField; 
import java.util.Date; 

public class UnderlyingAllocationPercent extends DoubleField 
{ 
  public static final int FIELD = 972; 

  public UnderlyingAllocationPercent() 
  { 
    super(972);
  } 
  public UnderlyingAllocationPercent(double data) 
  { 
    super(972, data);
  } 
} 
