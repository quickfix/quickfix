package quickfix.field; 
import quickfix.DoubleField; 
import java.util.Date; 

public class MaxFloor extends DoubleField 
{ 
  public static final int FIELD = 111; 

  public MaxFloor() 
  { 
    super(111);
  } 
  public MaxFloor(double data) 
  { 
    super(111, data);
  } 
} 
