package quickfix.field; 
import quickfix.IntField; 
import java.util.Date; 

public class MarketDepth extends IntField 
{ 
  public static final int FIELD = 264; 

  public MarketDepth() 
  { 
    super(264);
  } 
  public MarketDepth(int data) 
  { 
    super(264, data);
  } 
} 
