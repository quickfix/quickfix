package quickfix.field; 
import quickfix.DoubleField; 
import java.util.Date; 

public class AllocInterestAtMaturity extends DoubleField 
{ 
  public static final int FIELD = 741; 

  public AllocInterestAtMaturity() 
  { 
    super(741);
  } 
  public AllocInterestAtMaturity(double data) 
  { 
    super(741, data);
  } 
} 
