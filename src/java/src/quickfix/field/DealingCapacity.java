package quickfix.field; 
import quickfix.DoubleField; 
import java.util.Date; 

public class DealingCapacity extends DoubleField 
{ 
  public static final int FIELD = 1048; 

  public DealingCapacity() 
  { 
    super(1048);
  } 
  public DealingCapacity(double data) 
  { 
    super(1048, data);
  } 
} 
