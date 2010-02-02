package quickfix.field; 
import quickfix.DoubleField; 
import java.util.Date; 

public class UnderlyingFXRate extends DoubleField 
{ 
  public static final int FIELD = 1045; 

  public UnderlyingFXRate() 
  { 
    super(1045);
  } 
  public UnderlyingFXRate(double data) 
  { 
    super(1045, data);
  } 
} 
