package quickfix.field; 
import quickfix.BooleanField; 
import java.util.Date; 

public class ReversalIndicator extends BooleanField 
{ 
  public static final int FIELD = 700; 

  public ReversalIndicator() 
  { 
    super(700);
  } 
  public ReversalIndicator(boolean data) 
  { 
    super(700, data);
  } 
} 
