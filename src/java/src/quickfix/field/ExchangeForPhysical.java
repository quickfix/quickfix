package quickfix.field; 
import quickfix.BooleanField; 
import java.util.Date; 

public class ExchangeForPhysical extends BooleanField 
{ 
  public static final int FIELD = 411; 

  public ExchangeForPhysical() 
  { 
    super(411);
  } 
  public ExchangeForPhysical(boolean data) 
  { 
    super(411, data);
  } 
} 
