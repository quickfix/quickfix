package quickfix.field; 
import quickfix.DoubleField; 
import java.util.Date; 

public class RoundingModulus extends DoubleField 
{ 
  public static final int FIELD = 469; 

  public RoundingModulus() 
  { 
    super(469);
  } 
  public RoundingModulus(double data) 
  { 
    super(469, data);
  } 
} 
