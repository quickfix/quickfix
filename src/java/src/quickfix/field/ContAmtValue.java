package quickfix.field; 
import quickfix.DoubleField; 
import java.util.Date; 

public class ContAmtValue extends DoubleField 
{ 
  public static final int FIELD = 520; 

  public ContAmtValue() 
  { 
    super(520);
  } 
  public ContAmtValue(double data) 
  { 
    super(520, data);
  } 
} 
