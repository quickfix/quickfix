package quickfix.field; 
import quickfix.DoubleField; 
import java.util.Date; 

public class LegContractMultiplier extends DoubleField 
{ 
  public static final int FIELD = 614; 

  public LegContractMultiplier() 
  { 
    super(614);
  } 
  public LegContractMultiplier(double data) 
  { 
    super(614, data);
  } 
} 
