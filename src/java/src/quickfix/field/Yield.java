package quickfix.field; 
import quickfix.DoubleField; 
import java.util.Date; 

public class Yield extends DoubleField 
{ 
  public static final int FIELD = 236; 

  public Yield() 
  { 
    super(236);
  } 
  public Yield(double data) 
  { 
    super(236, data);
  } 
} 
