package quickfix.field; 
import quickfix.DoubleField; 
import java.util.Date; 

public class PegOffsetValue extends DoubleField 
{ 
  public static final int FIELD = 211; 

  public PegOffsetValue() 
  { 
    super(211);
  } 
  public PegOffsetValue(double data) 
  { 
    super(211, data);
  } 
} 
