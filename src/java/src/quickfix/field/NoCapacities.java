package quickfix.field; 
import quickfix.IntField; 
import java.util.Date; 

public class NoCapacities extends IntField 
{ 
  public static final int FIELD = 862; 

  public NoCapacities() 
  { 
    super(862);
  } 
  public NoCapacities(int data) 
  { 
    super(862, data);
  } 
} 
