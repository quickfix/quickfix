package quickfix.field; 
import quickfix.DoubleField; 
import java.util.Date; 

public class OpenInterest extends DoubleField 
{ 
  public static final int FIELD = 746; 

  public OpenInterest() 
  { 
    super(746);
  } 
  public OpenInterest(double data) 
  { 
    super(746, data);
  } 
} 
