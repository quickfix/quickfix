package quickfix.field; 
import quickfix.IntField; 
import java.util.Date; 

public class MaxPriceLevels extends IntField 
{ 
  public static final int FIELD = 1090; 

  public MaxPriceLevels() 
  { 
    super(1090);
  } 
  public MaxPriceLevels(int data) 
  { 
    super(1090, data);
  } 
} 
