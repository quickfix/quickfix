package quickfix.field; 
import quickfix.DoubleField; 
import java.util.Date; 

public class Factor extends DoubleField 
{ 
  public static final int FIELD = 228; 

  public Factor() 
  { 
    super(228);
  } 
  public Factor(double data) 
  { 
    super(228, data);
  } 
} 
