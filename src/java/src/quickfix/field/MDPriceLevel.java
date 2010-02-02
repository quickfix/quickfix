package quickfix.field; 
import quickfix.IntField; 
import java.util.Date; 

public class MDPriceLevel extends IntField 
{ 
  public static final int FIELD = 1023; 

  public MDPriceLevel() 
  { 
    super(1023);
  } 
  public MDPriceLevel(int data) 
  { 
    super(1023, data);
  } 
} 
