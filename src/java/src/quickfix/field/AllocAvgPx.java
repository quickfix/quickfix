package quickfix.field; 
import quickfix.DoubleField; 
import java.util.Date; 

public class AllocAvgPx extends DoubleField 
{ 
  public static final int FIELD = 153; 

  public AllocAvgPx() 
  { 
    super(153);
  } 
  public AllocAvgPx(double data) 
  { 
    super(153, data);
  } 
} 
