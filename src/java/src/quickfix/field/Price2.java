package quickfix.field; 
import quickfix.DoubleField; 
import java.util.Date; 

public class Price2 extends DoubleField 
{ 
  public static final int FIELD = 640; 

  public Price2() 
  { 
    super(640);
  } 
  public Price2(double data) 
  { 
    super(640, data);
  } 
} 
