package quickfix.field; 
import quickfix.DoubleField; 
import java.util.Date; 

public class AccruedInterestRate extends DoubleField 
{ 
  public static final int FIELD = 158; 

  public AccruedInterestRate() 
  { 
    super(158);
  } 
  public AccruedInterestRate(double data) 
  { 
    super(158, data);
  } 
} 
