package quickfix.field; 
import quickfix.IntField; 
import java.util.Date; 

public class DiscretionRoundDirection extends IntField 
{ 
  public static final int FIELD = 844; 
public static final int MORE_AGGRESSIVE = 1; 
public static final int MORE_PASSIVE = 2; 

  public DiscretionRoundDirection() 
  { 
    super(844);
  } 
  public DiscretionRoundDirection(int data) 
  { 
    super(844, data);
  } 
} 
