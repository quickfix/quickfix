package quickfix.field; 
import quickfix.IntField; 
import java.util.Date; 

public class LiquidityNumSecurities extends IntField 
{ 
  public static final int FIELD = 441; 

  public LiquidityNumSecurities() 
  { 
    super(441);
  } 
  public LiquidityNumSecurities(int data) 
  { 
    super(441, data);
  } 
} 
