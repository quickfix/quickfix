package quickfix.field; 
import quickfix.IntField; 
import java.util.Date; 

public class NoUnderlyingAmounts extends IntField 
{ 
  public static final int FIELD = 984; 

  public NoUnderlyingAmounts() 
  { 
    super(984);
  } 
  public NoUnderlyingAmounts(int data) 
  { 
    super(984, data);
  } 
} 
