package quickfix.field; 
import quickfix.DoubleField; 
import java.util.Date; 

public class Price extends DoubleField 
{ 
  public static final int FIELD = 44; 

  public Price() 
  { 
    super(44);
  } 
  public Price(double data) 
  { 
    super(44, data);
  } 
} 
