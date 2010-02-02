package quickfix.field; 
import quickfix.DoubleField; 
import java.util.Date; 

public class FirstPx extends DoubleField 
{ 
  public static final int FIELD = 1025; 

  public FirstPx() 
  { 
    super(1025);
  } 
  public FirstPx(double data) 
  { 
    super(1025, data);
  } 
} 
