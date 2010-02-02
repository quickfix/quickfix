package quickfix.field; 
import quickfix.DoubleField; 
import java.util.Date; 

public class StrikeValue extends DoubleField 
{ 
  public static final int FIELD = 968; 

  public StrikeValue() 
  { 
    super(968);
  } 
  public StrikeValue(double data) 
  { 
    super(968, data);
  } 
} 
