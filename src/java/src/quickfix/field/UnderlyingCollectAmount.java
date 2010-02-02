package quickfix.field; 
import quickfix.DoubleField; 
import java.util.Date; 

public class UnderlyingCollectAmount extends DoubleField 
{ 
  public static final int FIELD = 986; 

  public UnderlyingCollectAmount() 
  { 
    super(986);
  } 
  public UnderlyingCollectAmount(double data) 
  { 
    super(986, data);
  } 
} 
