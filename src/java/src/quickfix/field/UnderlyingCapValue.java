package quickfix.field; 
import quickfix.DoubleField; 
import java.util.Date; 

public class UnderlyingCapValue extends DoubleField 
{ 
  public static final int FIELD = 1038; 

  public UnderlyingCapValue() 
  { 
    super(1038);
  } 
  public UnderlyingCapValue(double data) 
  { 
    super(1038, data);
  } 
} 
