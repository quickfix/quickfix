package quickfix.field; 
import quickfix.IntField; 
import java.util.Date; 

public class YieldRedemptionPriceType extends IntField 
{ 
  public static final int FIELD = 698; 

  public YieldRedemptionPriceType() 
  { 
    super(698);
  } 
  public YieldRedemptionPriceType(int data) 
  { 
    super(698, data);
  } 
} 
