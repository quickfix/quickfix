package quickfix.field; 
import quickfix.DoubleField; 
import java.util.Date; 

public class InterestAtMaturity extends DoubleField 
{ 
  public static final int FIELD = 738; 

  public InterestAtMaturity() 
  { 
    super(738);
  } 
  public InterestAtMaturity(double data) 
  { 
    super(738, data);
  } 
} 
